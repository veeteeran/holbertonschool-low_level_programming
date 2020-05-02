#include "lists.h"

/**
 * add_dnodeint - add node at beginning of list
 * @head: pointer to the pointer to head node
 * @n: data contained in list
 *
 * Return: address of new element, NULL if failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	if (*head == NULL)
	{
		*head = new;
		new->next = NULL;
	}
	else
	{
		new->next = *head;
		(*head)->prev = new;
		*head = new;
	}

	return (*head);
}
