#!/bin/bash
# File Name: build.sh
# @Author: caoying - liujiachen@baidu.com
# Created Time : Sun Oct 15 10:08:59 2017
# Description:

g++ -I ./eigen/ demo_simple.cpp -o demo_simple

g++ -Wno-c++11-extensions -I ./eigen/ demo_tensor.cpp -o demo_tensor
