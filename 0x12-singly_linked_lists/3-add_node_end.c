#include "lists.h"

/**
 *
 *  * print_list - entry point
 *
 *   * @h: linked list
 *
 *    *
 *
 *     * Return: number of nodes
 *
 *      * */
size_t print_list(const list_t *h)
{
	long unsigned int count = 0;

	while(h != NULL)
	{
		if(h -> str != NULL)
		{
			printf("[%u] %s\n", h -> len, h -> str);
		}
		else
		{
			printf("[%u] %s\n", 0, NIL);
		}
		h = h -> next;
		count++;
	}
	return (count);
}
