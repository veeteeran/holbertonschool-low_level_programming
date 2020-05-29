#include "hash_tables.h"
void free_list(shash_node_t *head);
/**
 * shash_table_create - create a hash table
 * @size: size of the array
 *
 * Return: the created hash table
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *new;
	unsigned long int index;

	new = malloc(sizeof(shash_table_t));
	if (new == NULL)
		return (NULL);

	new->size = size;
	new->array = malloc(sizeof(shash_node_t) * size);
	if (new->array == NULL)
	{
		free(new);
		return (NULL);
	}

	for (index = 0; index < size; index++)
	{
		new->array[index] = NULL;
		new->shead = NULL;
		new->stail = NULL;
	}
	return (new);
}

/**
 * shash_table_set - add element to hash table
 * @ht: the hash table
 * @key: the key
 * @value: value associated with key
 *
 * Return: 1 on successs, 0 otherwise
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	char *key_copy, *value_copy;
	unsigned long int index;
	shash_node_t *node, *temp;

	if (ht == NULL || key == NULL || strcmp(key, "") == 0)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	for (temp = ht->array[index]; temp != NULL; temp = temp->next)
	{
		if (strcmp(key, temp->key) == 0)
		{
			free(temp->value);
			temp->value = strdup(value);
			return (1);
		}
	}

	node = malloc(sizeof(shash_node_t));
	if (node == NULL)
		return (0);

	key_copy = strdup(key);
	value_copy = strdup(value);
	node->key = key_copy;
	node->value = value_copy;
	node->next = NULL;
	node->sprev = NULL;
	node->snext = NULL;

	if (ht->array[index] == NULL)
		ht->array[index] = node;
	else
	{
		node->next = ht->array[index];
		ht->array[index] = node;
	}
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
	unsigned long int index;
	char *value = NULL;
	shash_node_t *temp;

	if (ht == NULL || key == NULL || strcmp(key, "") == 0)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	if (ht->array[index] == NULL)
		return (NULL);

	for (temp = ht->array[index]; temp != NULL; temp = temp->next)
	{
		if (strcmp(key, temp->key) == 0)
		{
			value = temp->value;
			break;
		}
	}

	return (value);
}

/**
 * shash_table_print - prints a hash table
 * @ht: the hash table
 *
 * Return: nothing
 */
void shash_table_print(const shash_table_t *ht)
{
	unsigned long int index;
	int flag = 0;
	shash_node_t *temp;

	if (ht)
	{
		printf("{");
		for (index = 0; index < ht->size; index++)
		{
			if (ht->array[index] == NULL)
				continue;
			else
			{
				for (temp = ht->array[index]; temp; temp = temp->next)
				{
					if (flag == 1)
						printf(", ");
					printf("'%s': '%s'", temp->key, temp->value);
					flag = 1;
				}
			}
		}
		printf("}\n");
	}
}

/**
 * shash_table_print_rev - print hash table in reverse
 * @ht: the hash table
 *
 * Return: nothing
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	printf("%s\n", ht->array[0]->key);
}

/**
 * shash_table_delete - deletes a hash table
 * @ht: the hash table
 *
 * Return: nothing
 */
void shash_table_delete(shash_table_t *ht)
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
 * free_list - frees a shash_node_t list
 * @head: pointer to head of list
 *
 * Return: void
 */
void free_list(shash_node_t *head)
{
	shash_node_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp->key);
		free(temp->value);
		free(temp);
	}
}
