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
	hash_node_t *new, *tmp;
	unsigned long int index, i;

	if (value == NULL || key == NULL || *key == '\0' || ht == NULL)
		return (0);

	i = ht->size;
	index = key_index((const unsigned char *)key, i);
	tmp = ht->array[index];
	for ( ; tmp; )
	{
		if (tmp && strcmp(tmp->key, key) == 0)
		{
			free(tmp->value);
			tmp->value = strdup(value);
			if (tmp->value == NULL)
				return (0);
			return (1);
		}
	}
	new = malloc(sizeof(hash_node_t));
	if (!new)
	{
		free(new);
		return (0);
	}
	new->key = strdup(key);
	if (new->key == NULL)
		return (0);
	new->value = strdup(value);
	if (new->value == NULL)
		return (0);
	new->next = ht->array[index];
	ht->array[index] = new;

	return (1);
}
