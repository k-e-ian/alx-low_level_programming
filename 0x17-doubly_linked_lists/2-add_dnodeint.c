#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint - add a node to a doubly linked list dlistint_t
 * @head: pointer to head
 * @n: int element in a doubly linked list
 * Return: the new node or NULL if fail
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = *head;

	if (*head != NULL)
		(*head)->prev = new;

	*head = new;

	return (new);
}
