# VHS Generation Loss (VST3)

Faust DSP (`faust/vhs_linear_cascade.dsp`, v0.4.1) wrapped in a JUCE plugin. Stereo in, stereo out.
Every Faust control is exposed as a host parameter, grouped like the Faust UI. The editor is JUCE's
generic parameter list.

## Get a plugin file without installing a compiler (GitHub Actions)

1. Create a new GitHub repository and push this folder to it.
2. Open the repository's **Actions** tab and wait for "Build VST3" to finish (about 15 to 25 minutes the first time).
3. Download the artifact for your system (Windows, macOS or Linux). Inside is `VHS Generation Loss.vst3`.

## Build locally

Needs CMake 3.22+ and a C++17 compiler (Visual Studio 2022, Xcode command line tools, or GCC/Clang on Linux).
The first configure downloads JUCE.

    cmake -B build -DCMAKE_BUILD_TYPE=Release
    cmake --build build --config Release --target VHSGenerationLoss_VST3

The result is in `build/VHSGenerationLoss_artefacts/Release/VST3/`.
Linux also needs: libasound2-dev libfreetype-dev libfontconfig1-dev libx11-dev libxrandr-dev
libxinerama-dev libxcursor-dev libxext-dev libgl1-mesa-dev.
Use `--target VHSGenerationLoss_Standalone` for a standalone app you can test without a DAW.

## Install

- Windows: copy the `.vst3` folder to `C:\Program Files\Common Files\VST3\`
- macOS: copy to `~/Library/Audio/Plug-Ins/VST3/`. If it was downloaded, run `xattr -cr "VHS Generation Loss.vst3"` first (the build is not notarised).
- Linux: copy to `~/.vst3/`

Then rescan plugins in your DAW.

## Changing the DSP

Edit `faust/vhs_linear_cascade.dsp`, then run `faust/regenerate.sh` (needs the Faust compiler, 2.70 or newer;
the compile takes about a minute) and rebuild. The wrapper reads the controls from the generated code, so
nothing else needs to change. Adding or removing a control changes parameter IDs and breaks saved presets.

## Notes

- Set your own name and codes in `CMakeLists.txt` (`COMPANY_NAME`, `PLUGIN_MANUFACTURER_CODE`, `PLUGIN_CODE`).
- Licensing: JUCE is GPLv3 or commercial. A plugin you only use yourself is fine. If you give out binaries,
  the plugin has to be released under the GPL as well (or you need a JUCE commercial licence).
  The Faust headers in `faust_include/` are LGPL; generated code is covered by Faust's architecture exception.
- Latency is not reported to the host. Each linear copy adds about 6 ms, so 8 copies add roughly 50 ms.
- CPU: the 8 copies and both paths always run, whatever Generations is set to.
