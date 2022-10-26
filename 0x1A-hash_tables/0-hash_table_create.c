#include "hash_tables.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>

/**
 * hash_table_create - create a hash table
 * @size: size of array
 * Return: pointer to newly created hash_table or Null if fail
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_ht;
	unsigned long int i;

	new_ht = malloc(sizeof(hash_table_t));

	if (new_ht == NULL)
		return (NULL);

	new_ht->size = size;
	new_ht->array = malloc(sizeof(hash_node_t *) * size);

	if (new_ht->array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		new_ht->array[i] = NULL;

	return (new_ht);
}
