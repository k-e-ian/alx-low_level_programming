#include "hash_tables.h"

/**
 * hash_table_print - print a hash table
 * @ht: hash table
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node = NULL;
	unsigned long int i = 0;
	int init_comma = 0;

	if (ht == NULL)
		return;

	printf("{");

	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];

		while (node != NULL)
		{
			if (init_comma == 1)
				printf(", ");

			init_comma = 1;
			printf("'%s': '%s'", (char *) node->key,
					(char *) node->value);
			node = node->next;
		}
	}
	printf("}\n");
}
