#include "main.h"

/**
 * _pow_recursion - calculates powers
 * @x: integer parameter
 * @y: integer parameter
 *
 * Return: integer
 */
int _pow_recursion(int x, int y)
{
	if (x == 1)
		return (1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}	
