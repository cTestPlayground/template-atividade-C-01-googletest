#!/bin/bash

echo "cmake build"
cmake -S . -B build

echo "cmake --build"
cmake --build build

echo "cd build and run test"
cd build && ctest