#include "main.h"

/**
 * argstostr - concatenate all arguments given
 * @ac: number of arguments
 * @av: char pointer
 *
 * Return: SUCCESS ? pointer to string : NULL
 */

char *argstostr(int ac, char **av)
{
	char *s;
	int len, i, j, k = 0;

	if (!av)
		return (NULL);

	len = 0;
	for (i = 0; i < ac; i++)
		len += strlen(av[i]);

	len += (ac + 1);

	s = malloc(len * sizeof(char));

	if (!s)
	{
		free(s);
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		for (j = 0; j < (int) strlen(av[i]); j++)
			s[k++] = av[i][j];

		s[k++] = '\n';
	}

	return (s);
}
