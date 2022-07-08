#include "main.h"
#include <stdio.h>

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
	char c;

	c = 'A';
	print("%c: %d\n", c, _issupper(c));
	c = 'a';
	printf("%c: %d\n", c, _isupper(c));
	return (0);
}
