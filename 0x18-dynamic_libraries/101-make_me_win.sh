#!/bin/bash
wget -P ../ https://github.com/rwachirarw/alx-low_level_programming/raw/master/0x18-dynamic_libraries/crack.so
export LD_PRELOAD=../crack.so
