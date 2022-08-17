#include "lists.h"

size_t looped_listint_count(listint_t *head);

/**
 * free_listint_safe - This function can free lists with a loop
 * @h: pointer to head
 *
 * Return: the size of the list that was free’d
 *
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *tmp;
	size_t nodes, index;

	nodes = looped_listint_count(*h);

	if (nodes == 0)
	{
		for (; h != NULL && *h != NULL; nodes++)
		{
			tmp = (*h)->next;
			free(*h);
			*h = tmp;
		}
	}

	else
	{
		for (index = 0; index < nodes; index++)
		{
			tmp = (*h)->next;
			free(*h);
			*h = tmp;
		}

		*h = NULL;
	}

	h = NULL;

	return (nodes);
}

/**
 * looped_listint_count - Counts the number of unique nodes
 *                      in a looped listint_t linked list.
 * @head: A pointer to the head of the listint_t to check.
 *
 * Return: If the list is not looped - 0.
 *         Otherwise - the number of unique nodes in the list.
 */
size_t looped_listint_count(listint_t *head)
{
	listint_t *current, *next;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

        current = head->next;
        next = (head->next)->next;

        while (next)
        {
                if (current == next)
                {
                        current = next;
                        while (current != next)
                        {  
                                nodes++;
                                current = current->next;
                                next = next->next;
                        }

                        current = current->next;
                        while (current != next)
                        {
                                nodes++;
                                current = current->next;
                        }

                        return (nodes);
                }

                current = current->next;
                next = (next->next)->next;
        }

        return (0);
}
