#include "main.h"

/**
 * main - entry point
 * @argc: argument parameter
 * @argv: argument vector
 *
 * Return: integer
 */
bool  is_num(char argv)
{
	char upper = 'A';
	char lower = 'a';
	char letter;

	for (i = 'A'; i <= 'Z'; i++)
	{
		if (i == argv)
			return (1);
	}
	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == argv)
			return (1);
	}
	return (0);
}
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
		if (!is_num(argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);


	return (0);
}
