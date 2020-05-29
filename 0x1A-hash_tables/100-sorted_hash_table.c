#include "hash_tables.h"

/**
 * shash_table_create - create a hash table
 * @size: size of the array
 *
 * Return: the created hash table
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	return (NULL);
}

/**
 * shash_table_set - add element to hash table
 * @key: the key
 * @value: value associated with key
 *
 * Return: 1 on successs, 0 otherwise
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	return (0);
}

/**
 * shash_table_get - retrieves value associated with key
 * @ht: hash table to look into
 * @key: key to look for
 *
 * Return: value associated with element, NULL if key not found
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	return (NULL);
}

/**
 * shash_table_print - prints a hash table
 * @ht: the hash table
 *
 * Return: nothing
 */
void shash_table_print(const shash_table_t *ht)
{
	printf("");
}

/**
 * shash_table_print_rev - print hash table in reverse
 * @ht: the hash table
 *
 * Return: nothing
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	printf("");
}

/**
 * shash_table_delete - deletes a hash table
 * @ht: the hash table
 *
 * Return: nothing
 */
void shash_table_delete(shash_table_t *ht)
{
	free(ht);
}
