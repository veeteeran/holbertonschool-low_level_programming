#include "lists.h"

/**
 * delete_dnodeint_at_index - delete node at index
 * @head: pointer to pointer of head node
 * @index: index of node to be deleted
 *
 * Return: 1 on success, -1 otherwise
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int node_num;

	if (*head == NULL || head == NULL)
		return (-1);

	temp = *head;
	if (index == 0)
	{
		if (temp->next == NULL)
			*head = NULL;
		else
		{
			*head = temp->next;
			(*head)->prev = NULL;
		}
		free(temp);
		return (1);
	}

	for (node_num = 0; node_num < index; node_num++, temp = temp->next)
		if (temp->next == NULL)
			return (-1);

	if (temp->next == NULL)
	{
		temp->prev->next = NULL;
		free(temp);
	}
	else
	{
		temp->next->prev = temp->prev;
		temp->prev->next = temp->next;
		free(temp);
	}
	return (1);
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
