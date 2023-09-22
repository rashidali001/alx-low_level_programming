#include "main.h"

/**
 * print_line - prints a line
 * @n: length
 *
 * Return: void
 */
void print_line(int n)
{
	int i, x;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}
	for (i = 0; i <= n; i++)
	{
		x = i == n ? '\n' : '_';
		_putchar(x);
	}
}
