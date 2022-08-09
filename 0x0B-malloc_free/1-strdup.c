#include  "main.h"
#include <stddef.h>

/**
 * _strdup - entry pont
 * @str: pointer parameter
 *
 * Return: pointer to the duplicated string
 */
char *_strdup(char *str)
{
	int a, b;
	char *cpd_str;

	if (str == NULL)
		return (NULL);
	for (a = 0; str[a] != '\0'; a++)
		;
	cpd_str = malloc(sizeof(char) * (a + 1));
	if (cpd_str == NULL)
		return (NULL);
	for (b = 0; b <= a; b++)
	{
		cpd_str[b] = str[b];
	}
	return (cpd_str);
}
