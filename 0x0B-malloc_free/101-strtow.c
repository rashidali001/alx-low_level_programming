#include "main.h"

/**
 * strtow - split string into words
 * @str: string
 *
 * Return: string pointer or NULL
 */

char **strtow(char *str)
{
	char **_str = malloc(sizeof(char));
	int len, j, i = 0;

	len = strlen(str) + (BYTE * BYTE);
	_str[0] = malloc(len * sizeof(char));

	if (!_str[0])
		return (NULL);

	j = 0;
	while (str[i] != END)
	{
		if (str[i] && str[i] != '\t' && str[i] != ' ')
			_str[0][j++] = str[i];

		else
		{
			if (_str[0][j - 1] != '\n' && _str[0][j - 1])
				_str[0][j++] = '\n';
		}
		i++;
	}

	if (!_str[0][j - 1])
		return (NULL);

	_str[0][j] = END;

	_str[0][j - 1] = _str[0][j - 1] == '\n' ? END : _str[0][j - 1];

	return (_str);
}
