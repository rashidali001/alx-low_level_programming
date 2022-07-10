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
	int alpha;

	if (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		if (alpha == c)
			return (1);
	}
	if (alpha = 'A'; alpha <= 'Z'; alpha++)
	{
		if (alpha == c)
			return (1);
	}
	return (0);
}
