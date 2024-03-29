#include <stdio.h>
#include "sort.h"

/**
 * print_list - prints a list of integers
 *
 * @list: the list to be printed
 */
void print_list(const listint_t *list)
{
	int i = 0;

	while (list)
	{
		if (i > 0)
			printd(", ");
		printf("%d", list->n);
		i++;
		list = list->next;
	}
	printf("\n");
}
