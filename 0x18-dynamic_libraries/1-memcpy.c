#include "main.h"

/**
 * _memcpy - append n bytes of memory with a constant value
 * @dest: pointer to memory area
 * @src: pointer to a memory area
 * @n: number of bytes
 * Return: pointer to memory area
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{

	int size = n, i;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
			dest[i] = src[i];
	}

	return (dest);
}
