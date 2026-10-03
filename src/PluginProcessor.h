#pragma once
#include <juce_audio_processors/juce_audio_processors.h>
#include <memory>
#include <vector>
#include <atomic>
#include "faust/gui/APIUI.h"
#include "faust/dsp/dsp.h"

// Wraps the Faust-generated VhsDsp class. Every Faust control becomes a host
// parameter (grouped by the Faust group names), so the DSP can be regenerated
// without touching this file.
class VhsProcessor : public juce::AudioProcessor
{
public:
    VhsProcessor();
    ~VhsProcessor() override = default;

    void prepareToPlay (double sampleRate, int samplesPerBlock) override;
    void releaseResources() override {}
    bool isBusesLayoutSupported (const BusesLayout& layouts) const override;
    void processBlock (juce::AudioBuffer<float>&, juce::MidiBuffer&) override;

    juce::AudioProcessorEditor* createEditor() override;
    bool hasEditor() const override { return true; }

    const juce::String getName() const override { return JucePlugin_Name; }
    bool acceptsMidi() const override { return false; }
    bool producesMidi() const override { return false; }
    double getTailLengthSeconds() const override { return 0.0; }

    int getNumPrograms() override { return 1; }
    int getCurrentProgram() override { return 0; }
    void setCurrentProgram (int) override {}
    const juce::String getProgramName (int) override { return {}; }
    void changeProgramName (int, const juce::String&) override {}

    void getStateInformation (juce::MemoryBlock& destData) override;
    void setStateInformation (const void* data, int sizeInBytes) override;

private:
    static juce::AudioProcessorValueTreeState::ParameterLayout createLayout();

    std::unique_ptr<dsp> fDsp;
    APIUI fUI;
    juce::AudioProcessorValueTreeState apvts;
    std::vector<std::atomic<float>*> fRaw;      // host value for each Faust control, same order as APIUI
    juce::AudioBuffer<float> fScratch;
    static constexpr int kChunk = 2048;

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (VhsProcessor)
};
