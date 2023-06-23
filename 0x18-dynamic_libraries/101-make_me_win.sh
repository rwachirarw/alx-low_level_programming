#!/bin/bash
wget -P -o /tmp/crack.so https://github.com/rwachirarw/alx-low_level_programming/raw/master/0x18-dynamic_libraries/crack.so
export LD_PRELOAD=/tmp/crack.so
