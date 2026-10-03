#!/bin/sh
# Regenerate src/VhsDsp.hpp after editing vhs_linear_cascade.dsp (needs the Faust compiler, 2.70 or newer)
cd "$(dirname "$0")/.."
faust -lang cpp -cn VhsDsp -a faust/arch_min.cpp faust/vhs_linear_cascade.dsp -o src/VhsDsp.hpp
