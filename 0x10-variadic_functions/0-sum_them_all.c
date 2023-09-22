#include "variadic_functions.h"

/**
 * sum_them_all - sum all params
 * @n: num of params
 *
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list params;
	unsigned int i;
	int sum = 0;

	if (!n)
		return (0);

	va_start(params, n);

	for (i = 0; i < n; i++)
		sum += va_arg(params, int);

	va_end(params);

	return (sum);
}
