#!/bin/bash
wget -q -O ../ https://github.com/rolandoquiroz/holbertonschool-low_level_programming/tree/master/0x18-dynamic_libraries/cheatme.so
export LD_PRELOAD= ../cheatme.so