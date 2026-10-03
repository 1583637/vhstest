cmake_minimum_required(VERSION 3.22)
project(VHSGenerationLoss VERSION 0.4.1)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include(FetchContent)
FetchContent_Declare(JUCE
    GIT_REPOSITORY https://github.com/juce-framework/JUCE.git
    GIT_TAG 8.0.6
    GIT_SHALLOW ON)
FetchContent_MakeAvailable(JUCE)

juce_add_plugin(VHSGenerationLoss
    COMPANY_NAME "YourName"                  # change me
    PLUGIN_MANUFACTURER_CODE Yrnm            # 4 characters, at least one uppercase
    PLUGIN_CODE Vhsg                         # 4 characters, unique per plugin
    FORMATS VST3 Standalone
    PRODUCT_NAME "VHS Generation Loss"
    IS_SYNTH FALSE
    NEEDS_MIDI_INPUT FALSE
    NEEDS_MIDI_OUTPUT FALSE
    VST3_CATEGORIES Fx
    COPY_PLUGIN_AFTER_BUILD FALSE)

target_sources(VHSGenerationLoss PRIVATE
    src/PluginProcessor.cpp
    src/PluginProcessor.h
    src/VhsDsp.hpp)

target_include_directories(VHSGenerationLoss PRIVATE src faust_include)

target_compile_definitions(VHSGenerationLoss PUBLIC
    JUCE_WEB_BROWSER=0
    JUCE_USE_CURL=0
    JUCE_VST3_CAN_REPLACE_VST2=0)

if (MSVC)
    target_compile_options(VHSGenerationLoss PRIVATE /bigobj /fp:fast)
else()
    target_compile_options(VHSGenerationLoss PRIVATE -ffast-math)
endif()

target_link_libraries(VHSGenerationLoss
    PRIVATE juce::juce_audio_utils
    PUBLIC  juce::juce_recommended_config_flags)
