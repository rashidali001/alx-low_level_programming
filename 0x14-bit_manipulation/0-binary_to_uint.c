#include "main.h"

/**
 * binary_to_uint - converts from binary to unsigned int
 * @b: string passed
 *
 * Return: converted binary to int
 */
unsigned int binary_to_uint(const char *b)
{
	int i = 0, sum = 0, size = 0;

	if (b == NULL)
		return NULL;
	while (b[i] != '\0')
	{
		if (b[i] > '1' || b[i] < '0')
			return NULL;
		i++;
	}
	i = 0;
	while (b[i] != '\0')
	{
		size++;
		i++;
	}
	i = 0;
	size--;
	while (b[i] != '\0')
	{
		if (b[i] == '1')
			sum += pow(2, size);
		size--;
		i++;
	}
	return sum;
}
