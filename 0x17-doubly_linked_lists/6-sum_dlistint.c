#include "lists.h"

/**
 * sum_dlistint - sums data in linked list
 * @head: pointer to head of list
 *
 * Return: sum of data, 0 if empty list
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *temp;

	if (head == NULL)
		return (sum);

	temp = head;
	while (temp->next != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	sum += temp->n;

	return (sum);
}
