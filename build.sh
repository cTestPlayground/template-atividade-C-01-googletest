#!/bin/bash

echo ""
echo "=> cmake build"
cmake -S . -B build

echo ""
echo "=> cmake --build"
cmake --build build

echo ""
echo "=> cd build and run test"
cd build && ctest