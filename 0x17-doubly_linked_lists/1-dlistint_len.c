#include "lists.h"

/**
 * dlistint_len - counts number of elements in a doubly link list
 * @h: pointer to head
 * Return: size of the doybly linked list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t len = 0;

	while (h)
	{
		len++;
		h = h->next;
	}
	return (len);
}
