#!/bin/bash
gcc -Werror -Wextra -pedantic -c *.c
ar -rs liball.a *.o
 
