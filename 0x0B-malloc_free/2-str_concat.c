#include "main.h"
#include <stdlib.h>

/**
 * getsize - entry point
 * @s1: pointer
 *
 * Return: integer
 */
int getsize(char *s1)
{
	int size = 0;
	while (*s1 != '\0')
	{
		size++;
		s1++;
	}
	return (size);
}

/**
 * str_concat - entry point
 * @s1: pointer
 * @s2: pointer
 *
 * Return: pointer
 */
char *str_concat(char *s1, char *s2)
{
	int a,b;
	char *strout;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	int size1 = getsize(s1);
	int size2 = getsize(s2);
	strout = malloc(sizeof(char) * (size1 + size2 + 1);

	if (strout == NULL)
	{
		free(strout);
		return (NULL);
	}
	for (a = 0; a <= size1; a++)
		strout[a] = s1[a];

	b = size1;
	for (b = 0; b <= size2; a++, b++)
		strout[a] = s2[b];

	return (strout);
}

