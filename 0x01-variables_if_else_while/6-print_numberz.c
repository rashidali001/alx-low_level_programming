#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char numer = '0';


	while (numer <= '9')
	{
		putchar(numer);
		numer++;
	}
	putchar('\n');
	return (0);
}
