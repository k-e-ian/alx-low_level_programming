#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - a function that adds a new node at the end of a list_t list
 * @head: A pointer the head of the list_t list
 * @str: the string to be added to the list_t list.
 * Return: the address of the new element, or NULL on failure
 */
list_t *add_node_end(list_t **head, const char *str)
{
	char *dup;
	int index;
	list_t *temp;
	list_t *new_node_end = malloc(sizeof(list_t));

	if (new_node_end == NULL)
		return (NULL);

	dup = strdup(str);

	if (str == NULL)
	{
		free(new_node_end);
	}

	for (index = 0; str[index]; )
		index++;

	new_node_end->str = dup;
	new_node_end->len = index;
	new_node_end->next = NULL;

	if (*head == NULL)
		*head = new_node_end;
	else
	{
		temp = *head;
		while(temp->next != NULL)
			temp = temp->next;
		temp->next = new_node_end;
	}
	return(*head);
}
