#include "lists.h"
/**
 * reverse_listint - reverses a listint_t linked list
 * @head: pointer to pointer of the first node
 *
 * Return: pointer to first node of reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *curr;
	listint_t *after;

	if (head == NULL || *head == NULL)
		return (NULL);

	curr = *head;
	after = curr->next;
	curr->next = NULL;

	while (after)
	{
		curr = after;
		after = after->next;
		curr->next = *head;
		*head = curr;
	}
	return (*head);
}
