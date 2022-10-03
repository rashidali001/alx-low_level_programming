#include "main.h"
#include <string.h>

/**
 * _strcat - concatenate two strings
 * @dest: char pointer
 * @src: char pointer
 *
 * Return: char *
 */

char *_strcat(char *dest, char *src)
{
	int len, _len, i;
	char c;

	i = 0;
	len = strlen(src);
	_len = strlen(dest);

	for (i = 0; i <= len; i++)
	{
		c = i < len ? src[i] : '\0';
		dest[_len + i] = c;
	}
	return (dest);
}
