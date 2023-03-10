#!/bin/bash

echo "Expected value:"
echo "\"At the end of the day, my goal was to be the best hacker\"
    - Kevin Mitnick"

if gcc -std=gnu89 main.c -L. -lmy -o quote; then
    echo -e "\n"
    echo "Your output: "
    ./quote 
else
    echo "Compilation failed"
fi
