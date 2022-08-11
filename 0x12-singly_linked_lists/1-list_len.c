#include "lists.h"

/**
 * list_len - function returning the number of elements in a linked list_t list
 * @h: pointer to struct list
 * Return: node_elemets
 */
size_t list_len(const list_t *h)
{
	size_t node_element = 0;

	while (h)
	{
		node_element++;
		h = h -> next;
	}
	return (node_element);
}
