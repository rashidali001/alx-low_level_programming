#include "main.h"
#include <ctype.h>

/**
 * _islower - checks to see if letter is lowercase
 *
 * Return: 1 to show lowercase, 0 to show not lowercase
 */
int _islower(int c)
{
	int arg = c;
	if (islower(arg))
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
