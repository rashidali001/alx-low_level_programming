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
		if (atoi(argv[i]) >= 0 && atoi(argv[i]) <= 9)
		{
	               sum += atoi(argv[i]);
		}
		else
		{
			printf("Error");
			return (1);
		}
	}
	printf("%d\n", sum);


	return (0);
}
