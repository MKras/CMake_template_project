#!/bin/sh

set -ex

#rm -rf ./build/
mkdir -p build

cd build
cmake .. 
make install

# run build project
./template_project.bin

# run tests immediately
ctest --verbose

cd ..

