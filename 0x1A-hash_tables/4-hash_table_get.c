#include "hash_tables.h"

/**
 * hash_table_get - retrieve the value associate with a key in a hash table
 * @ht: a pointer to the hash table
 * @key: the key to get the vale of
 * Return: if the key is matched - the value associated otherwise NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node = NULL;
	unsigned long int index = 0;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);

	if (index >= ht->size)
		return (NULL);

	node = ht->array[index];

	if (node == NULL)
		return (NULL);
	while (strcmp(node->key, key) != 0)
		node = node->next;
	return (node->value);
}
