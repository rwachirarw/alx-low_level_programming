#!/bin/bash
gcc -Werror -Wextra -Wall -pedantic -g -fPIC *.c -shared -o liball.so 
