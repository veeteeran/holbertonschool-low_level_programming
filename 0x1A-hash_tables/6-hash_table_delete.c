#include "hash_tables.h"
void free_list(hash_node_t *head);

/**
 * hash_table_delete - deletes a hash table
 * @ht: the hash table
 *
 * Return: nothing
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int index;

	for (index = 0; index < ht->size; index++)
	{
		if (ht->array[index] != NULL)
			free_list(ht->array[index]);
		
	}
	free(ht->array);
	free(ht);
}

/**
 * free_list - frees a list_t list
 * @head: pointer to head of list
 *
 * Return: void
 */
void free_list(hash_node_t *head)
{
	hash_node_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp->key);
		free(temp->value);
		free(temp);
	}
}
