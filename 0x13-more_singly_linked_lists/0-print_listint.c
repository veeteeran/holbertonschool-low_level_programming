#include "lists.h"
/**
 * print_listint - prints all the elements of a listint_t list
 * @h: pointer to first node
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t node_count;

	if (h == NULL)
		return (0);
	while (h)
	{
		if (h->n == 0)
			printf("0");
		else
			printf("%d\n", h->n);
		node_count++;
		h = h->next;
	}
	return (node_count);
}
