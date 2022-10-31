#include "hash_tables.h"

/**
 * shash_table_create - creates a sorted hash table
 * @size: size of hash table
 * Return: pointer to the new table, or NLL on failure
 */

shash_table_t *shash_table_create(unsigned long int size)
{
	unsigned long int i = 0;
	hash_table_t *htable = NULL;
	hash_node_t **arr = NULL;

	htable = malloc(sizeof(hash_table_t));
	if (htable == NULL)
		return (NULL);

	arr = malloc(sizeof(hash_node_t *) * size);
	if (arr == NULL)
		return (NULL);

	for (; i < size; ++i)
		arr[i] = NULL;

	htable->size = size;
	htable->array = arr;

	return (htable);
}

/**
 * shash_table_set - fill a hash table with value
 * @ht: hash table
 * @key: key to set value
 * @value: value
 * Return: int value of set ht
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{unsigned long int idx = 0;
	hash_node_t *elem = NULL, *new_node = NULL;

	if (ht == NULL || key == NULL || (strcmp(key, "") == 0))
		return (0);

	idx = key_index((unsigned char *) key, ht->size);
	elem = ht->array[idx];

	if (elem && strcmp(key, elem->key) == 0)
	{
		free(elem->value);
		elem->value = strdup(value);
		return (1);
	}

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);

	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = ht->array[idx];
	ht->array[idx] = new_node;
	return (1);
}

/**
 * shash_table_get - get value by key
 * @ht: hash table
 * @key: key set for value in hashtable
 * Return: element value
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int idx = 0;
	hash_node_t *elem = NULL;

	if (ht == NULL || key == NULL)
		return (NULL);

	idx = key_index((unsigned char *) key, ht->size);
	elem = ht->array[idx];

	if (elem == NULL)
		return (NULL);

	while (strcmp(key, elem->key) != 0)
		elem = elem->next;

	return (elem->value);
}

/**
 * shash_table_print - print hash table
 * @ht: hash table
 * Return: void
 */
void shash_table_print(const shash_table_t *ht)
{
	hash_node_t *node = NULL;
	unsigned long int i = 0;
	short pr_commas = 0;

	if (ht == NULL)
		return;

	printf("{");

	for (; i < ht->size; ++i)
	{
		node = ht->array[i];

		while (node)
		{
			if (pr_commas == 1)
				printf(", ");

			pr_commas = 1;
			printf("'%s': '%s'", (char *) node->key,
								(char *) node->value);

			node = node->next;
		}
	}

	printf("}\n");
}

/**
 * shash_table_print_rev - print hash table in reverse
 * @ht: hash table
 * Return: void
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *node;

	if (ht == NULL)
		return;

	node = ht->stail;
	printf("{");
	while (node != NULL)
	{
		printf("'%s': '%s'", node->key, node->value);
		node = node->sprev;
		if (node != NULL)
			printf(", ");
	}
	printf("}\n");
}

/**
 * shash_table_delete - delete ht
 * @ht: hash table
 * Return: void
 */
void shash_table_delete(shash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *node = NULL, *temp = NULL;

	if (ht && ht->size && ht->array)
	{
		for (; i < ht->size; ++i)
		{
			node = ht->array[i];

			if (node)
			{
				if (node->next)
				{
					node = node->next;
					while (node)
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
