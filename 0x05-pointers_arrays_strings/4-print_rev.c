#include "main.h"

/**
 * print_rev - prints
 * @s: pointer
 *
 * Return: 0
 */
void print_rev(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	while (i--)
		_putchar(s[i]);
	_putchar('\n');
}
