#include "lists.h"

/**
 * find_listint_loop - a function that finds the loop in a linked list.
 *
 * @head: pointer to head
 *
 * Return: Address of node where loop starts, or NULL if there is no loop
 *
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *current, *next;

	if (head == NULL || head->next == NULL)
		return (NULL);

        current = head->next;
        next = (head->next)->next;

        while (next)
        {
                if (current == next)
                {
                        current = next;
                        while (current != next)
                        {
                                current = current->next;
                                next = next->next;
                        }
			return (current);
                }

                current = current->next;
                next = (next->next)->next;
        }

        return (NULL);
}
