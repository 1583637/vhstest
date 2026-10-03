#include "PluginProcessor.h"

#if defined(_MSC_VER)
 #pragma warning (push)
 #pragma warning (disable : 4100 4101 4244 4267 4305 4456 4457 4458 4701 4702 4996)
#endif
#include "VhsDsp.hpp"
#if defined(_MSC_VER)
 #pragma warning (pop)
#endif

namespace
{
    // stable, host-safe parameter ID from a Faust path such as "/VHS .../Deck/Standard"
    juce::String makeId (const juce::String& address, int index)
    {
        juce::String id;
        for (auto c : address)
            id << (juce::CharacterFunctions::isLetterOrDigit (c) ? c : (juce::juce_wchar) '_');
        while (id.contains ("__")) id = id.replace ("__", "_");
        id = id.trimCharactersAtStart ("_").trimCharactersAtEnd ("_");
        if (id.isEmpty()) id = "param";
        return id + "_" + juce::String (index);          // index keeps IDs unique and stable for one DSP version
    }

    // "menu{'PAL':0;'NTSC':1}" -> { "PAL", "NTSC" }
    juce::StringArray parseMenu (const char* style)
    {
        juce::StringArray names;
        if (style == nullptr) return names;
        juce::String s (style);
        if (! s.startsWith ("menu")) return names;
        auto body = s.fromFirstOccurrenceOf ("{", false, false).upToLastOccurrenceOf ("}", false, false);
        for (auto& item : juce::StringArray::fromTokens (body, ";", ""))
            names.add (item.fromFirstOccurrenceOf ("'", false, false).upToFirstOccurrenceOf ("'", false, false));
        return names;
    }
}

juce::AudioProcessorValueTreeState::ParameterLayout VhsProcessor::createLayout()
{
    VhsDsp tmp;                                   // only used to enumerate the controls
    APIUI ui;
    tmp.buildUserInterface (&ui);

    juce::AudioProcessorValueTreeState::ParameterLayout layout;
    std::vector<std::unique_ptr<juce::AudioProcessorParameterGroup>> groups;
    juce::StringArray groupNames;

    for (int i = 0; i < ui.getParamsCount(); ++i)
    {
        const juce::String address (ui.getParamAddress (i));
        const juce::String label   (ui.getParamLabel (i));
        const auto tokens = juce::StringArray::fromTokens (address, "/", "");
        // tokens: [root, group, (subgroups...), name]
        juce::String group = tokens.size() >= 3 ? tokens[1] : juce::String ("Main");

        const double mn = ui.getParamMin (i), mx = ui.getParamMax (i);
        const double init = ui.getParamInit (i), step = ui.getParamStep (i);
        const auto type = ui.getParamItemType (i);
        const auto menu = parseMenu (ui.getMetadata (i, "style"));
        const juce::String unit (ui.getMetadata (i, "unit") != nullptr ? ui.getMetadata (i, "unit") : "");
        const juce::ParameterID pid (makeId (address, i), 1);

        std::unique_ptr<juce::RangedAudioParameter> p;
        if (type == APIUI::kCheckButton || type == APIUI::kButton)
            p = std::make_unique<juce::AudioParameterBool> (pid, label, init > 0.5);
        else if (menu.size() >= 2)
            p = std::make_unique<juce::AudioParameterChoice> (pid, label, menu, juce::jlimit (0, menu.size() - 1, (int) init));
        else if (step >= 1.0 && std::floor (mn) == mn && std::floor (mx) == mx)
            p = std::make_unique<juce::AudioParameterInt> (pid, label, (int) mn, (int) mx, (int) init,
                                                           juce::AudioParameterIntAttributes().withLabel (unit));
        else
            p = std::make_unique<juce::AudioParameterFloat> (pid, label,
                    juce::NormalisableRange<float> ((float) mn, (float) mx, (float) step), (float) init,
                    juce::AudioParameterFloatAttributes().withLabel (unit));

        int gi = groupNames.indexOf (group);
        if (gi < 0)
        {
            groupNames.add (group);
            groups.push_back (std::make_unique<juce::AudioProcessorParameterGroup> ("grp" + juce::String ((int) groups.size()), group, " | "));
            gi = (int) groups.size() - 1;
        }
        groups[(size_t) gi]->addChild (std::move (p));
    }

    for (auto& g : groups) layout.add (std::move (g));
    return layout;
}

VhsProcessor::VhsProcessor()
    : AudioProcessor (BusesProperties().withInput  ("Input",  juce::AudioChannelSet::stereo(), true)
                                       .withOutput ("Output", juce::AudioChannelSet::stereo(), true)),
      fDsp (std::make_unique<VhsDsp>()),
      apvts (*this, nullptr, "STATE", createLayout())
{
    fDsp->buildUserInterface (&fUI);
    for (int i = 0; i < fUI.getParamsCount(); ++i)
    {
        auto* raw = apvts.getRawParameterValue (makeId (fUI.getParamAddress (i), i));
        jassert (raw != nullptr);
        fRaw.push_back (raw);
    }
}

bool VhsProcessor::isBusesLayoutSupported (const BusesLayout& layouts) const
{
    return layouts.getMainInputChannelSet()  == juce::AudioChannelSet::stereo()
        && layouts.getMainOutputChannelSet() == juce::AudioChannelSet::stereo();
}

void VhsProcessor::prepareToPlay (double sampleRate, int)
{
    fDsp->init ((int) sampleRate);
    fScratch.setSize (2, kChunk);
    fScratch.clear();
}

void VhsProcessor::processBlock (juce::AudioBuffer<float>& buffer, juce::MidiBuffer&)
{
    juce::ScopedNoDenormals noDenormals;

    for (size_t i = 0; i < fRaw.size(); ++i)
        fUI.setParamValue ((int) i, fRaw[i]->load());

    const int numCh = juce::jmin (2, buffer.getNumChannels());
    const int total = buffer.getNumSamples();
    for (int start = 0; start < total; start += kChunk)
    {
        const int n = juce::jmin (kChunk, total - start);
        for (int c = 0; c < 2; ++c)
        {
            auto* src = buffer.getReadPointer (juce::jmin (c, numCh - 1)) + start;
            juce::FloatVectorOperations::copy (fScratch.getWritePointer (c), src, n);
        }
        float* in[2]  = { fScratch.getWritePointer (0), fScratch.getWritePointer (1) };
        float* out[2] = { buffer.getWritePointer (0) + start, buffer.getWritePointer (numCh > 1 ? 1 : 0) + start };
        fDsp->compute (n, in, out);
    }
}

juce::AudioProcessorEditor* VhsProcessor::createEditor()
{
    return new juce::GenericAudioProcessorEditor (*this);
}

void VhsProcessor::getStateInformation (juce::MemoryBlock& destData)
{
    if (auto xml = apvts.copyState().createXml())
        copyXmlToBinary (*xml, destData);
}

void VhsProcessor::setStateInformation (const void* data, int sizeInBytes)
{
    if (auto xml = getXmlFromBinary (data, sizeInBytes))
        if (xml->hasTagName (apvts.state.getType()))
            apvts.replaceState (juce::ValueTree::fromXml (*xml));
}

juce::AudioProcessor* JUCE_CALLTYPE createPluginFilter()
{
    return new VhsProcessor();
}
