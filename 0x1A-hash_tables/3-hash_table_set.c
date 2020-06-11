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
	hash_node_t *node, *temp;

	if (ht == NULL || key == NULL || strcmp(key, "") == 0)
		return (0);

	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	for (temp = ht->array[index]; temp != NULL; temp = temp->next)
	{
		if (strcmp(key, temp->key) == 0)
		{
			free(temp->value);
			temp->value = strdup(value);
			free(node);
			return (1);
		}
	}

	key_copy = strdup(key);
	value_copy = strdup(value);
	node->key = key_copy;
	node->value = value_copy;
	node->next = NULL;

	if (ht->array[index] == NULL)
		ht->array[index] = node;
	else
	{
		node->next = ht->array[index];
		ht->array[index] = node;
	}

	return (1);
}
