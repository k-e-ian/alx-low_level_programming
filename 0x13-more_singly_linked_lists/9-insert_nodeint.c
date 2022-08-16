#include "lists.h"

/**
 *
 *
 *
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int count;
	listint_t *temp, *new_node_at_idx = malloc(sizeof(listint_t));

	for (count = 0; count < idx; count++)
	{
		temp = (*head)->next;
	}
	for (count = 0; count < idx; count++)
	{
		*head = new_node_at_idx;
	}
	new_node_at_idx->next = temp;
	new_node_at_idx->n = n;
	return (new_node_at_idx);
}
