#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 -c *.c
ar -rc liall.a *.o
ranlib liball.a
