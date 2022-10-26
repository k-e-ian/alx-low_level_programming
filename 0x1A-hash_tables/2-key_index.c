#include "hash_tables.h"

/**
 * key_index - get the index at which a key=value pair should be stored in ht
 * @key: the key to get index of
 * @size: the size of array of hashtable
 * Return: the index of key
 * Description: for djb2 algorithm
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
