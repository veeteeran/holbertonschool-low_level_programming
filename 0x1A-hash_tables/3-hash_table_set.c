#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: hash table
 * @key: key to hash
 * @value: value associated with key
 *
 * Return: 1 on success, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	char *key_copy, *value_copy;
	unsigned long int index;
	hash_node_t *node;

	if (ht == NULL || key == NULL)
		return (0);

	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (0);

	key_copy = strdup(key);
	value_copy = strdup(value);
	index = key_index((const unsigned char *)key_copy, ht->size);
	node->key = key_copy;
	node->value = value_copy;
	ht->array[index] = node;

	return (1);
}
