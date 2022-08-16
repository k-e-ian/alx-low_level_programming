#include "lists.h"

/**
 * add_nodeint_end -function that adds a new node at the end of a list
 * @head: pointer to pointer to singly list
 * @n: integer
 * Return: pointer to endnode
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp, *end_node = malloc(sizeof(listint_t));

	if (!end_node)
		return (NULL);
	end_node->n = n;
	end_node->next = NULL;

	if (*head == NULL)
		*head = end_node;
	else
	{
		temp = *head;
		while ((*temp).next != NULL)
			temp = (*temp).next;
		(*temp).next = end_node;
	}
	return (end_node);
}
