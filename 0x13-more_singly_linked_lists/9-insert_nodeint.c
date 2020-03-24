#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to pointer to first node
 * @idx: index to insert node
 * @n: int data of new node
 *
 * Return: address of new node, NULL if failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp;
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL || head == NULL)
		return (NULL);

	temp = *head;
	while (idx > 1)
	{
		temp = temp->next;
		if (temp == NULL)
			return (NULL);

		idx--;
	}

	new->n = n;
	new->next = temp->next;
	temp->next = new;

	return (temp);
}
