#include "lists.h"

/**
 * free_dlistint - free doubly linked list
 * @head: pointer to head node
 *
 * Return: Nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	temp = head;
	while (temp)
	{
		head = head->next;
		free(temp);
		temp = head;
	}
}
