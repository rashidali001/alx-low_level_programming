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
	int size1 = getsize(s1);
	int size2 = getsize(s2);
	int totalsize = size1 + size2;
	char con_cat[totalsize];
	int a,b;
	char *strout;

	for (a = 0; a <= size1; a++)
	{
		con_cat[a] = s1[a];
	}
	b = size1;
	for (a = 0; a <= size2; a++)
	{
		con_cat[b] = s2[a];
		b++;
	}
	strout = malloc(sizeof(char) * totalsize);
	for (a = 0; a <= totalsize; a++)
	{
		strout[a] = con_cat[a];
	}
	return (strout);
}

