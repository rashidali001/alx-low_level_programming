#ifndef _MAIN_H
#define _MAIN_H

#define END '\0'

#define EMPTY ""

#include <stdio.h>

#include <stdlib.h>

#include <string.h>

int _putchar(char c);

/**
 * malloc_checked - allocates memory using malloc
 * @b: size of memory to allocate
 *
 * Return: void
 */

void *malloc_checked(unsigned int b);

/**
 * string_nconcat - allocates memory using malloc
 * @s1: string
 * @s2: string
 * @n: length of string
 *
 * Return: pointer to memory location
 */

char *string_nconcat(char *s1, char *s2, unsigned int n);

/**
 * _realloc - allocate memory and set all values to 0
 * @ptr: pointer to the memory previously allocated (malloc(old_size))
 * @old_size: size previously allocated
 * @new_size: new size to reallocate
 *
 * Return: pointer to reallocated memory
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);


#endif
