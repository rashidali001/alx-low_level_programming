#include "main.h"

/**
 * _this_is_root - obtainign root
 * @n: integer
 * @is_root: check if done
 *
 * Return: integer
 */
int _this_is_root(int n, int is_root)
{
	if (is_root * is_root > n)
		return (-1);
	if (is_root * is_root == n)
		return (is_root);

	return (_this_is_root(n, is_root + 1));
}

/**
 * _sqrt_recursion - call this is root fn
 * @n: integer
 *
 * Return: integer
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (_this_is_root(n, 1));
}

