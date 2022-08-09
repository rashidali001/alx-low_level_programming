#include "main.h"
#include <stdlib.h>
/**
 * str_concat - entry point
 * @s1: pointer
 * @s2: pointer
 *
 * Return: pointer
 */
char *str_concat(char *s1, char *s2)
{
	int a, b, c, limit
	char *strout;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (a = 0; s[a] != '\0'; a++)
		;
	for (b = 0; s[b] != '\0'; b++)
		;

	strout = malloc(sizeof(char) * (a + b + 1));

	if (strout == NULL)
	{
		free(strout);
		return (NULL);
	}

	for (c = 0; c < a; c++)
		strout[c] = s1[c];

	limit = b;

	for (b = 0; b <= limit; c++, b++)
		strout[c] = s2[b];

	return (strout);
}

