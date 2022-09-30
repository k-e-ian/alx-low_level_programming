#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - prints dlistint doubly linked list
 * @h: head
 * Return: dlist nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (nodes);
}
