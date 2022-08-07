#include "main.h"

/**
 * print_last_digit - entery point
 * @para: integre parameter
 *
 * Return: integer
 */
int print_last_digit(int para)
{
	if (para < 0)
	{
		para *= -1;
		_putchar((para % 10) + '0');
		return (para % 10);
	}
	_putchar((para % 10) + '0');
	return (para % 10);
}

