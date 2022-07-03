#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return : ALWAYS 0 (Success)
 */
int main(void)
{
	char alpha = 'a';
	while(alpha <= 'z')
	{	
		printf("%c", alpha);
		alpha++;
	}
	return (0);
}
