#include "hash_tables.h"

/**
 * key_index - gives the index of a k
 * @key: the key
 * @size: size of the array of the hash table
 *
 * Return: index where key/value pair should be stored
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash = hash_djb2(key);

	return (hash % size);
}