#ifndef HASH_TABLES
#define HASH_TABLES

#include <stdio.h>

#include <stdlib.h>

/**
 * struct hash_node_s - Node of a hash table
 * @key: The key, string
 * The key is unique in the HAshTable
 * @value: The value corresponding to a key
 * @next: A pointer to the next node of the List
 */

typedef struct hash_node_s
{
	char *key;
	char *value;
	struct hash_node_s *next;
} hash_node_t;

/**
 * struct hash_tables_s - Hash table data structure
 * @size: the array size
 * @array: an array of size @size
 * Each cell of this array is a pointer to ther first node of a linked list,
 * beacuse we want our HAshTable to use a Chaining collision handling
 */
typedef struct hash_table_s
{
	unsigned long int size;
	hash_node_t **array;
} hash_table_t;

hash_table_t *hash_table_create(unsigned long int size);

unsigned long int key_index(const unsigned char *key, unsigned long int size);

unsigned long int hash_djb2(const unsigned char *str);

int hash_table_set(hash_table_t *ht, const char *key, const char *value);

#endif /* HASH_TABLE */
