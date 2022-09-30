#include "lists.h"

/**
 * sum_dlistint - summation
 * @head: pointer to head
 * Return: Always EXIT_SUCCESS
 *
 */
int sum_dlistint(dlistint_t *head)
{
	int total = 0;

	while (head)
	{
		total += head->n;
		head = head->next;
	}
	return (total);
}
