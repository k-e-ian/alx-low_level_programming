#include "lists.h"

/**
 * print_listint - a function that prints all the elements of a singly list.
 * @h: pointer to listint_t node
 *
 * Return: nodecount
 */
size_t print_listint(const listint_t *h)
{
	size_t ncount = 0;

	while (h)
	{
		printf("%d\n", (*h).n);
		ncount++;
		h = (*h).next;
	}
	return (ncount);
}
