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
	dlistint_t *current;
	unsigned int node_num;

	if (*head == NULL)
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

	for (node_num = 0; node_num < index; node_num++)
		temp = temp->next;

	current = temp->next;
	temp = temp->prev;
	free(temp->next);
	temp->next = current;

	return (1);
}
