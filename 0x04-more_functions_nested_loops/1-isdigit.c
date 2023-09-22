#include "main.h"

/**
 * _isdigit - Check for uppercase characters
 * @c: integer
 * Return: 1 (Success) 0 (Otherwise)
 */

int _isdigit(int c)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		if (c == i)
			return (1);
	}

	return (0);
}
