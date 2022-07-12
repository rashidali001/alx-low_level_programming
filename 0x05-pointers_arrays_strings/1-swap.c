#include "main.h"

/**
 * swap_int - swaps value of 2 integers
 * @a: pointer to integer
 * @b: pointer to integer
 *
 * Return: void
 */
void swap_int(int *a,int *b)
{
	*a = *b;
	*b = *a;
}
