#include "main.h"
#include <ctype.h>

/**
 * _isalpha - checks for alphabet
 * @c: integer input
 *
 * Return: 1 (alphabet) 0 (otherwise)
 */
int _isalpha(int c)
{
	int i, j;

	if (i = 'a'; i <= 'z'; i++)
	{
		if (i == c)
			return (1);
	}
	if (j = 'A'; j <= 'Z'; j++)
	{
		if (i == c)
			return (1);
	}
	return (0);
}
