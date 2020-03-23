#include "lists.h"
/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: pointer to pinter of first node
 *
 * Return: the head node's data(n)
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n_data;

	if (*head == NULL)
		return (0);

	temp = *head;
	n_data = temp->n;
	temp = temp->next;
	free(*head);
	*head = temp;

	return (n_data);
}
