#include "lists.h"

/**
 * print_dlistint - print doubly linked list
 * @h: list
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes = 0;

	for (; h; nodes++, h = h->next)
		printf("%d\n", h->n);

	return (nodes);
}
