#!/bin/bash
wget -q -O ../ https://github.com/eadortsu/alx-low_level_programming/tree/master/0x18-dynamic_libraries/libmask.so
export LD_PRELOAD= ../libmask.so
