#include "lists.h"

/**
 * print_list - print all the elements of a list_t list
 * @h: pointer to const struct list_t
 * Return: nodecount
 *
 */
size_t print_list(const list_t *h)
{
	size_t nodecount = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");

		else
			printf("[%u] %s\n", h->len, h->str);

		nodecount++;
		h = h->next;
	}

	return (nodecount);
}
