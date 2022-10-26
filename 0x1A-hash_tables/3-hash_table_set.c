#include "hash_tables.h"
#include <string.h>
/**
 * hash_table_set - update an element in a hash table
 * @ht: a pointer to the hash table
 * @key: the key to add
 * @value: the value associated with key
 * Return: 0 or 1 on failure or otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new;
	char *tmp;
	unsigned long int index, i;

	if (value == NULL || key == NULL || *key == '\0' || ht == NULL)
		return (0);

	tmp = strdup(value);
	if (tmp == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	for (i = index; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = tmp;
			return (1);
		}
	}
	new = malloc(sizeof(hash_node_t));
	if (!new)
	{
		free(new);
		return (0);
	}
	new->value = tmp;
	new->next = ht->array[index];
	ht->array[index] = new;

	return (1);
}
