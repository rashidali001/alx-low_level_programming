#include <stdio.h>

/**
 * main - entry point
 *
 * Return: integer
 */
int main(void)
{
	int first = 0, second = 0, third = 0;
	for (first = 0; first <= 9; first ++)
	{
		for (second = first + 1; second <= 9; second++)
		{
			for (third = second + 1; third <= 9; third++)
			{
				if (third == first || third == second)
					continue;
			putchar(first + '0');
			putchar(second + '0');
			putchar(third + '0');
			putchar(',');
			putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
