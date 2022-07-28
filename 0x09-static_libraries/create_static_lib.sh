#!/bin/bash

# compile

gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -c *.c

#create lin

ar -cr liiball.a *.c
