#!/bin/bash

out="`dirname "$(stat -f "$0")"`"
out="${out:1}"
out="$(pwd)$out"
cd "$out"

g++ -o Compiled\/Temp/main src/main.cpp
./main
rm main
