#include "variadic_functions.h"

/**
 * print_char - prints char
 * @params: params
 */
void print_char(va_list params)
{
	printf("%c", va_arg(params, int));
}

/**
 * print_int - prints int
 * @params: params
 */
void print_int(va_list params)
{
	printf("%d", va_arg(params, int));
}

/**
 * print_float - prints float
 * @params: params
 */
void print_float(va_list params)
{
	printf("%f", va_arg(params, double));
}

/**
 * print_string - prints string
 * @params: params
 */
void print_string(va_list params)
{
	char *s;

	s = va_arg(params, char *);
	printf("%s", s ? s : NIL);
}


/**
 * print_all - prints anything
 * @format: list of types of args
 *
 * Return: void
 */

void print_all(const char * const format, ...)
{
	opt_t print[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string},
		{NULL, NULL}
	};

	va_list params;
	int i, j;
	char *sep = "";

	va_start(params, format);
	i = 0;
	while (format && *(format + i))
	{
		j = 0;
		while (print[j].opt && (*(print[j].opt) != *(format + i)))
			j++;

		if (print[j].opt)
		{
			printf("%s", sep);
			print[j].meth(params);
			sep = ", ";
		}
		i++;
	}

	va_end(params);
	printf("\n");
}
