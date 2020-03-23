#include "lists.h"
/**
 * free_listint2 - frees a listint_t list, sets the head to NULL
 * @head: pointer to pointer of first node
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	temp = *head;
	while (temp)
	{
		temp = temp->next;
		free(*head);
		*head = temp;
	}

	*head = NULL;
}
