#include "lists.h"

/**
 * print_listint - print all elements of a list
 * @h: list
 *
 * Return: list size
 */

size_t print_listint(const listint_t *h)
{
	size_t nodes;

	for (nodes = 0; h; nodes++)
	{
		printf("%d\n", (*h).n);
		h = (*h).next;
	}

	return (nodes);
}
