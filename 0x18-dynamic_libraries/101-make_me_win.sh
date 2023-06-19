#!/bin/bash
wget -P ../ https://github.com/rwachirarw/alx-low_level_programming/blob/master/0x18-dynamic_libraries/crack.so
LD_PRELOAD=../crack.so
