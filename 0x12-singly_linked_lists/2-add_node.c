#include "lists.h"

/**
 * add_node -  adds a new node at the beginning of a list_t list
 * @head: A pointer to the head of the list_t list
 * @string: The string to be added to the list_t list
 * Return: the address of the new element, or NULL on failure
 */
list_t *add_node(list_t **head, const char *str)
{
	char *dup;
	int index;
	list_t *new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	dup = strdup(str);
	if (dup == NULL)
	{
		free(new_node);
		return (NULL);
	}

	for (index = 0; str[index];)
		index++;

	new_node -> str = dup;
	new_node -> len = index;
	new_node -> next = *head;

	*head = new_node;

	return (new_node);
}
