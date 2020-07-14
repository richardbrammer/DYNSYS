#!/bin/sh
current=$(pwd)
# test for bin ? create bin
if [ ! -d build ]; then mkdir -p build; fi
gcc src/Main.c src/Lexer.c -o build/Dynsys
ln -sf build/Dynsys Dynsys
chmod +x Dynsys
echo 'e.g. use "examples/adoption_1.dynsys" as file'
./Dynsys
