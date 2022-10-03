#include "main.h"

/**
 * _puts - print to the stdout
 * @str: string
 *
 * Return: void
 */

void _puts(char *s)
{
	int len, i;

	len = strlen(s);
	for (i = 0; i < len; i++)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
