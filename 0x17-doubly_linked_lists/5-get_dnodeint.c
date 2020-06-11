#include "lists.h"

/**
 * get_dnodeint_at_index - gets index of nth node
 * @head: pointer to head of list
 * @index: index of node
 *
 * Return: nth node at index, otherwise NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int node_num;

	temp = head;
	for (node_num = 0; node_num < index; node_num++)
	{
		if (temp == NULL)
			return (NULL);

		temp = temp->next;
	}

	return (temp);
}
