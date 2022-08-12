#include "lists.h"

/**
 * list_len - entry point
 * @h: linked list
 *
 * Return: number of elements in a linked list
 */
size_t list_len(const list_t *h)
{
	long unsigned int count  = 0;
	
	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
