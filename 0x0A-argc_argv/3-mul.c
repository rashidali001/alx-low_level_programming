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
	int multi = 1;
	int i;

	if (argc == 1)
	{
		printf("Error\n");
		return (1);
	}
	for (i = 1; i < argc; i++)
	{
		multi *= atoi(argv[i]);
	}
	printf("%d\n", multi);
	return (0);
}

