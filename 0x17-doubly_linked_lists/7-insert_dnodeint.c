#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts new node at idx
 * @h: pointer to pointer of head node
 * @idx: index to insert new node
 * @n: data of new node
 *
 * Return: address of new node, NULL if failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *temp;
	unsigned int node_num, list_len = dlistint_len(*h);

	if (idx > list_len)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = NULL;

	if (h == NULL)
		return (new);
	else if (*h == NULL)
		*h = new;
	else if (idx == 0)
	{
		new->next = *h;
		*h = new;
	}
	else
	{
		temp = *h;
		for (node_num = 0; node_num < idx; node_num++)
			temp = temp->next;

		new->next = temp;
		new->prev = temp->prev;
		temp = temp->prev;
		temp->next = new;
	}
	return (new);
}

/**
 * dlistint_len - counts number of elements in list
 * @h: pointer to head of list
 *
 * Return: number of elements in list
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *current;
	size_t num_nodes = 0;

	current = h;
	while (current)
	{
		num_nodes++;
		current = current->next;
	}

	return (num_nodes);
}
