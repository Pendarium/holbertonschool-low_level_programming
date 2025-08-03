#include "hash_tables.h"

/**
 * key_index - computes the index of a key in a hash table
 * @key: the key to compute the index for
 * @size: the size of the hash table array
 * Return: the index at which the key/value pair should be stored
 * in the array of the hash table
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
