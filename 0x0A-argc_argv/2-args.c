#include "main.h"

/**
 * main - entry point
 * @argc: parameter count
 * @argv: array of parameter
 *
 * Return: integer
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
