#include "lists.h"

/**
 * add_nodeint - a function that adds a new node at the beginning of a list
 * @head: pointer to pointer to singly list
 * @n: integer
 *
 * Return: the address of the new element, or NULL if it failed
 *
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));

	if (!new_node)
	{
		free(new_node);
		return (NULL);
	}

	new_node->next = *head;

	new_node->n = n;

	*head = new_node;

	return (new_node);
}
