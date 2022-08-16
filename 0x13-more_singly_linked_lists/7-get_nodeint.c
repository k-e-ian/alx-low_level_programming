#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nth node of a linked list
 * @head: pointer to head
 * @index: is the index of the node, starting at 0
 * Return: the nth node of a linked list, or NULL if node doesn't exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count;

	for (count = 0; count < index; count++)
	{
		if (!head)
			return(NULL);
		head = (*head).next;
	}
	return (head);
}
