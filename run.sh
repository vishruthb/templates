#!/bin/bash
if [ "$#" -ne 1 ]; then
    echo "Usage: ./newcpp.sh <filename>"
    exit 1
fi

cp src/base.cpp "$1.cpp"
echo "Created $1.cpp from base.cpp"

