#!/bin/bash

echo ""
echo "=> cmake"
cmake -S . -B build

echo ""
echo "=> building"
cmake --build build

echo ""
echo "=> running tests"
cd build && ctest