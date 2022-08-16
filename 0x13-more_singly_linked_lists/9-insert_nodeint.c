#include "lists.h"

/**
 * insert_nodeint_at_index - function that inserts new node at a given position
 * @head: pointer to pointer to head
 * @idx: index of the list where the new node should be added, starts at 0
 * @n: integer
 * Return: the address of the new node, or NULL if it failed
 *
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int count;
	listint_t *temp, *new_node_at_idx = malloc(sizeof(listint_t));

	if (!new_node_at_idx)
		return (NULL);

	temp = *head;

	new_node_at_idx->n = n;

	if (idx == 0)
	{
		new_node_at_idx->next = temp;
		*head = new_node_at_idx;
		return (new_node_at_idx);
	}

	for (count = 0; count < (idx - 1); count++)
	{
		if (temp == NULL || temp->next == NULL)
			return (NULL);

		temp = temp->next;
	}

	new_node_at_idx->next = temp->next;
	temp->next = new_node_at_idx;

	return (new_node_at_idx);
}
