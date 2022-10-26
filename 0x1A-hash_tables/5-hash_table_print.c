#include "hash_tables.h"

/**
 * hash_table_print - print a hash table
 * @ht: hash table
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	unsigned long int i;
	char init = 0;

	if (ht == NULL)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			if (init == 1)
				printf(",");
			while (node != NULL)
			{
				printf("'%s': '%s'", node->key, node->value);
				node = node->next;
				if (node != NULL)
					printf(", ");
			}
			init = 1;
		}
	}
	printf("}\n");
}
