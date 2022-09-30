#include "lists.h"

/**
 * get_dnodeint_at_index - gets nth node of a dlistint_t dl list
 * @head: pointer to head
 * @index: nth position
 * Return: nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	while (index != 0)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
		index--;
	}
	return (head);
}
