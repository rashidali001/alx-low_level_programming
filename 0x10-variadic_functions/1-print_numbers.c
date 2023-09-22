#include "variadic_functions.h"

/**
 * print_numbers - print numbers
 * @separator: separator
 * @n: num of params
 *
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list params;

	va_start(params, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(params, int));
		if (!separator || i == n - 1)
			continue;

		printf("%s", separator);
	}

	va_end(params);
	printf("\n");
}
