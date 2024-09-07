#!/bin/bash

set -eux

g++ -Wall -pedantic run_test.cpp -I. -o run_test
./run_test
