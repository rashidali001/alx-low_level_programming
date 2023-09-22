#include "main.h"

/**
 * main - Entry point
 * @argc: number of params
 * @argv: array of params
 *
 * Return: SUCCESS ? 0 : 1
 */

int main(int argc, char *argv[])
{
	int _coins[5] = {25, 10, 5, 2, 1};
	int i, cents, coins = 0;

	if (argc != 2)
		goto ERROR;

	cents = atoi(argv[1]);

	if (cents < 0)
		goto DONE;

	for (i = 0; i < 5; i++)
	{
		coins += cents / _coins[i];
		cents %= _coins[i];
	}

DONE:	printf("%d\n", coins);
	return (0);

ERROR:	printf("Error\n");
	return (1);
}
