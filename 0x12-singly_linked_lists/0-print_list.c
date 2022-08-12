#include "lists.h"

/**
 *print_list - entry point
 *@h: linked list
 *
 *Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	unsigned int count = 0;
	const list_t *tmp;

	tmp = h;

	for (count = 0; tmp; count++)
	{
		if (tmp -> str)
			printf("[%u] %s\n", tmp -> len, tmp -> str);
		else
			printf("[%u] %s\n", 0, NIL);

		tmp = tmp -> next;
	}
	return (count);
}
