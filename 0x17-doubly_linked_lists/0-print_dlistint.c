#include "lists.h"
/**
 * print_dlistint - prints all the elements of a dlistint_t list
 * @h: pointer to head node
 *
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t num_nodes = 0;
	const dlistint_t *current;

	current = h;
	while (current)
	{
		printf("%d\n", current->n);
		num_nodes++;
		current = current->next;
	}

	return (num_nodes);
}
