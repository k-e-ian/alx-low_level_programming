#include "lists.h"

/**
 * sum_listint - function that returns sum of all the data(n) of a linked list
 * @head: pointer to head
 * Return: sumation
 *
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (!head)
		return (0);
	while (head)
	{
		sum += (*head).n;
		head = head->next;
	}
	return (sum);
}
