#include "lists.h"

/**
 * add_nodeint - push to list at head
 * @head: list head
 * @n: integer
 *
 * Return: address or NULL on fail
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	(*new).n = n;
	(*new).next = *head;
	*head = new;

	return (new);
}
