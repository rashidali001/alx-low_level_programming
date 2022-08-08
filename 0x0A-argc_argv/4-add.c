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

	if (argc == 1)
	{
		printf("0");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		if (!isdigit(atoi(argv[i])))
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);


	return (0);
}
