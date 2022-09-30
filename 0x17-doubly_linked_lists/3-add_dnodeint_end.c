#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint_end - add not at the end of a doubly linked list
 * @head: pointer to pointer to head
 * @n: data in the dl list
 * Return: newly added node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_n = malloc(sizeof(dlistint_t)), *last_n;

	if (new_n == NULL)
		return (NULL);

	new_n->n = n;
	new_n->next = NULL;

	if (*head == NULL)
	{
		new_n->prev = NULL;
		*head = new_n;
		return (new_n);
	}

	last_n = *head;
	while (last_n->next != NULL)
		last_n = last_n->next;
	last_n->next = new_n;
	new_n->prev = last_n;

	return (new_n);
}
