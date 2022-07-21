#include "main.h"
#include <string.h>

/**
 * _strlen_recursion - calculates length os string
 * @s: pointer argument
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	if (strlen(s) == '\0')
		return (0);
	s++;
	return (1 + _strlen_recursion(s));
}
