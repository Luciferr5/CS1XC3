#!/bin/bash

# Use First Argument As Working Directory
WDIR="$1"
cd "$WDIR"


F="file1.txt"

if [ "$2" -eq 1 ] ; then
    if [ ! -f "$F" ]; then
        touch "$F"
        echo $USER > "$F"
    fi

elif [ "$2" -eq 2 ] ; then
    if [ -f "$F" ]; then    
        if [ ! -d "$backup" ]; then 
            mkdir "backup"
        fi
        cp "$F" "./backup"
    fi


elif [ "$2" -eq 3 ] ; then
    if [ -f "backup/$F" ]; then
        cp backup/$F $F
        rm backup/$F
    fi



elif [ $# -ge 3 ]; then 
    F="$3"
else
   F="file1.txt" 
fi



if [ $# -gt 3 ]; then
    if [ -f "excess.txt" ]; then
        rm excess.txt
        touch excess.txt
    fi
    shift 3

    for j in "$@"; do
        echo "$j" >> "excess.txt" 
    done 
fi
