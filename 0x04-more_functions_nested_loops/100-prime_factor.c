#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long num = 612852475143;
	unsigned long div = 2;

	while (div < num)
	{
		if (num % div == 0)
			num /= div++;
		else
			div++;
	}

	printf("%lu\n", num);

	return (0);
}
