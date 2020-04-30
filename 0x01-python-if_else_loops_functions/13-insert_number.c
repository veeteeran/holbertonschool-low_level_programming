#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * insert_node - inserts a number into a sorted singly linked list
 * @head: pointer to head of node
 * @number: where to insert node
 *
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_node(listint_t **head, int number)
{
	listint_t *new;
	listint_t *current;
	listint_t *temp;

	current = *head;
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = number;
	new->next = NULL;

	if (head == NULL)
		return (new);
	else if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	else
		while (current->next != NULL)
		{
			temp = current;
			current = current->next;
			if (current->n > number)
			{
				temp->next = new;
				new->next = current;
				return (new);
			}
		}
	return (NULL);
}
