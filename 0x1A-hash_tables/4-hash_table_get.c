#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: hash table to look into
 * @key: key to look for
 *
 * Return: the value associated with the element, NULL if key not found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	char *value = NULL;
	hash_node_t *temp;

	if (ht == NULL)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	if (ht->array[index] == NULL)
		return (NULL);

	for (temp = ht->array[index]; temp != NULL; temp = temp->next)
	{
		if (strcmp(key, temp->key) == 0)
		{
			value = ht->array[index]->value;
			break;
		}
	}

	return (value);
}
