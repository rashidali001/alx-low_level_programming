#include "main.h"
#include <string.h>

/**
 * _strncat - Entry point
 * @dest: char pinter
 * @src: char pointer
 * @n: integer
 *
 * Return: char
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, _len;

	_len = strlen(dest);

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[_len + i] = src[i];

	dest[_len + i] = '\0';

	return (dest);
}
