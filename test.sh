#!/bin/bash

out="`dirname "$(stat -f "$0")"`"
out="${out:1}"
out="$(pwd)$out"
cd "$out"

g++ -o CompiledTemp/main src/main.cpp
./CompiledTemp/main
rm CompiledTemp/main
