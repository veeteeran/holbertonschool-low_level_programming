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
	dlistint_t *new;
	dlistint_t *temp;
	unsigned int node_num;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = NULL;

	if (h == NULL)
		return (new);
	else if (idx == 0)
	{
		new->next = *h;
		*h = new;
	}
	else if (*h == NULL)
		*h = new;
	else
	{
		temp = *h;
		for (node_num = 0; node_num < idx; node_num++)
			temp = temp->next;
	}
	new->next = temp->next;
	new->prev = temp;
	temp->next = new;

	return (new);
}
