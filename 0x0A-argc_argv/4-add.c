#include "main.h"

/**
 * main - entry point
 * @argc: argument parameter
 * @argv: argument vector
 *
 * Return: integer
 */
int main(__noerr int argc, __noerr char *argv[])
{
	int i;
	int sum = 0;
	int val;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		val = atoi(argv[i]);
		if (val == 0)
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);


	return (0);
}
