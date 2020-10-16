#!/bin/sh

set -ex

rm -rf ./build/
mkdir build

cd build
cmake .. 
make install

# run build project
./template_project.bin

# run tests immediately
ctest --verbose

cd ..

