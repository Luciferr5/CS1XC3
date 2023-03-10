#!/bin/bash
if [ -z "$1" ]; then
    echo "pls provide a file path"
    exit 1
fi

LIB_PATH="$1"
gcc -L$LIB_PATH -Wl,-rpath=$LIB_PATH -Wall -o test top.c -lLab6Part5

