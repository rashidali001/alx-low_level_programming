#include "main.h"

/**
 * print_numbers - print 0 - 9
 *
 * Return: void
 */
void print_numbers(void)
{
	int i, x;

	for (i = 0; i <= 10; i++)
	{
		x = i < 10 ? (i + '0') : '\n';
		_putchar(x);
	}
}
