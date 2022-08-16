#include "lists.h"

/**
 * delete_nodeint_at_index - function that del's node at index of a linked list
 * @head: pointer to pointer to head
 * @index: index at which node should be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int count;
	listint_t *previous, *current = *head;

	if (*current == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(current);
		return (1);
	}
	
	for (count = 0; count < (index - 1); count++)
	{
		if (current->next == NULL)
			return (-1);
		current = current->next;
	}
	
	previous = current->next;
	current->next = previous->next;
	free(previous);
	return (1);
}
