#include "lists.h"
/**
 * sum_listint - returns the sum of all the data (n)
 * @head: pointer to first node
 *
 * Return: sum of data(n) in linked list
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp;

	if (head == NULL)
		return (0);

	temp = head;
	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
