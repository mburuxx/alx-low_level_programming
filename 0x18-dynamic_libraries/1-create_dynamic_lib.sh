#!/usr/bin/bash

# Find all .c files in the current directory
c_files=$(find . -maxdepth 1 -type f -name "*.c")

# Compile each .c file into an object file
for file in $c_files; do
    gcc -c -Wall -Werror -fpic "$file"
done

# Create the dynamic library from all the object files
gcc -shared -o liball.so *.o

# Cleanup: remove the object files
rm -f *.o
