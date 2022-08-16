#include "lists.h"

/**
 * pop_listint - a function that deletes the head node of a list
 *
 * @head: pointer to pointer of the head
 *
 * Return: head node’s data (n)
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int nodedata;

	if (!*head)
		return (0);
	temp = *head;
	nodedata = (*head)->n;
	*head = (*head)->next;

	free(temp);

	return (nodedata);
}
