#include "lists.h"

/**
 * listint_len - function that returns the number of elements in a linked list
 * @h: pointer to listint_h singly list
 * Return: node count
 *
 */
size_t listint_len(const listint_t *h)
{
	size_t ncount = 0;

	while (h)
	{
		ncount++;
		h = (*h).next;
	}
	return (ncount);
}
