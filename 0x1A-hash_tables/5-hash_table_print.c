#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: the hash table
 *
 * Return: nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index;
	int flag = 0;

	if (ht == NULL)
		printf("{}\n");
	else
		printf("{");
		for (index = 0; index < ht->size; index++)
		{
			if (ht->array[index] == NULL)
				continue;
			if (flag == 1)
				printf(", ");
			printf("'%s': '%s'", ht->array[index]->key, ht->array[index]->value);
			flag = 1;
		}
		printf("}\n");
}
