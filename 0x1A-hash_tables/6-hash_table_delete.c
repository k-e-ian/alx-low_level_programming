#include "hash_tables.h"

/**
 * hash_table_delete - delete hash table
 * @ht: hash table
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *node = NULL, *temp = NULL;
	unsigned long int i = 0;

	if (ht && ht->size && ht->array)
	{
		for (i = 0; i < ht->size; i++)
		{
			node = ht->array[i];

			if (node)
			{
				if (node->next)
				{
					node = node->next;

					while (node != NULL)
					{
						temp = node;
						node = node->next;
						free(temp->key);
						free(temp->value);
						free(temp);
					}
				}

				node = ht->array[i];
				if (node->key && node->value)
				{
					free(node->key);
					free(node->value);
				}
			}
			free(node);
		}
		free(ht->array);
		free(ht);
	}
}
