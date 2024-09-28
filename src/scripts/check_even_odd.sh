#!/bin/bash

# Get the number from teh argument
number=$1

# Check if the number is even or odd
if [ $((number % 2)) -eq 0 ]; then
    echo "Even"
else 
    echo "Odd"
fi