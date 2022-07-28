#!/bin/bash

gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -c *.c

ar -cr liiball.a *.o
