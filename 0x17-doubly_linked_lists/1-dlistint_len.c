#include "lists.h"

/**
 * dlistint_len - counts number of elements in list
 * @h: pointer to head of list
 *
 * Return: number of elements in list
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *current;
	size_t num_nodes = 0;

	current = h;
	while (current)
	{
		num_nodes++;
		current = current->next;
	}

	return (num_nodes);
}
