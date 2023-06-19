#!/bin/bash
wget https://github.com/rwachirarw/alx-low_level_programming/blob/master/0x18-dynamic_libraries/crack.so
export LD_PRELOAD=$PWD/crack.so
