#include "main.h"

/**
 * _strncat - concatenates 2 strings
 * @dest: The string to appended upon
 * @src: The string to appended to dest
 * 2n: The number of bytes from src to be appended to dest
 *
 * Return: A pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int m)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;
	for (index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];
	return (dest);
}

