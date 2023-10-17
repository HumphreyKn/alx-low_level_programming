#!/bin/bash
gcc -fPIC -c 100-operations.c
gcc -shared 100-operations.o -o 100-operations.so
