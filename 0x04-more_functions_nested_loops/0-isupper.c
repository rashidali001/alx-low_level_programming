#include "main.h"

/**
 * _isupper - Check for uppercase characters
 * @c: integer
 * Return: 1 (Success) 0 (Otherwise)
 */

int _isupper(int c)
{
	int i;

	for (i = 'A'; i <= 'Z'; i++)
	{
		if (c == i)
			return (1);
	}

	return (0);
}
