#!/bin/bash

set -eux

g++ -std=c++17 -Wall -pedantic run_test.cpp -I. -o run_test
./run_test

echo "SUCCESS"
