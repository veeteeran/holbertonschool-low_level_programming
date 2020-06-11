#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra -c *.c
ar -rc liball_jill.a *.o
ranlib liball_jill.a
