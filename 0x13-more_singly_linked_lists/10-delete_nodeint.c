#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at index of linked list
 * @head: pointer to pointer of first node
 * @index: index of node to delete
 *
 * Return: 1 on success, -1 otherwise
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp;
	listint_t *curr;

	if (*head == NULL)
		return (-1);

	temp = *head;
	if (index == 0)
	{
		*head = temp->next;
		free(temp);
		return (1);
	}
	while (index > 1)
	{
		temp = temp->next;
		if (temp == NULL || temp->next == NULL)
			return (-1);

		index--;
	}

	curr = temp->next->next;
	free(temp->next);
	temp->next = curr;
	return (1);
}
