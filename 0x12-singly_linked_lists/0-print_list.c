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

	const list_t *ptr = NULL;

	ptr = h;

	while (ptr != NULL)
	{
		if (h -> str == NULL)
			printf("[0] (nil)");
		else 
			printf("[%u] %s", ptr -> len, ptr ->str);		
		nodecount++;
		ptr = ptr -> next;
	}
	return (nodecount);
}
