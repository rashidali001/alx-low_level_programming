#include "main.h"

/**
 * -strcmp - compares
 *  @s1: pointer
 *  @s2: pointer
 *
 *  Return: pointer
 */
int _strcmp(char *s1, char *s2)
{
	while ((*s1 && *s2) && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
