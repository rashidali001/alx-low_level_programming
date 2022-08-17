#include "lists.h"

/**
 * get_loop - Counts the number of unique nodes
 * @head: list
 *
 * Return: nodes or 0
 */
size_t get_loop(const listint_t *head)
{
	const listint_t *chaser, *runner;
	size_t nodes = 1;

	if (!head || !head->next)
		return (0);

	chaser = head->next;
	runner = (head->next)->next;

	for (; runner;)
	{
		if (chaser == runner)
		{
			chaser = head;
			for (; chaser != runner;)
			{
				nodes++;
				chaser = chaser->next;
				runner = runner->next;
			}

			chaser = chaser->next;
			for (; chaser != runner;)
			{
				nodes++;
				chaser = chaser->next;
			}

			return (nodes);
		}

		chaser = chaser->next;
		runner = (runner->next)->next;
	}

	return (0);
}

/**
 * print_listint_safe - Prints a list safely
 * @head: list
 *
 * Return: The number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, index = 0;

	nodes = get_loop(head);

	if (!nodes)
	{
		for (; head; nodes++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
		goto KILL;
	}

	for (index = 0; index < nodes; index++)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
	}
	printf("-> [%p] %d\n", (void *)head, head->n);

KILL:	return (nodes);
}
