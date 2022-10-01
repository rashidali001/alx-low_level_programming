#include "lists.h"

/**
 * dlistint_len - print doubly linked list
 * @h: list
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes = 0;

	for (; h; nodes++)
		h = h->next;

	return (nodes);
}
