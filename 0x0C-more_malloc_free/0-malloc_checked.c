#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 * @b: size of memory to allocate
 *
 * Return: void
 */

void *malloc_checked(unsigned int b)
{
	void *mem;

	mem = malloc(b);

	if (!mem)
		exit(98);

	return (mem);
}
