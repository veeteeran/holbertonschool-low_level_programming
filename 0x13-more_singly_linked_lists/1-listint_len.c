#include "lists.h"
/**
 * listint_len - returns the number of elements in a linked list
 * @h: pointer to first node
 *
 * Return: number of elements in linked list
 */
size_t listint_len(const listint_t *h)
{
	int node_count = 0;

	while (h)
	{
		node_count++;
		h = h->next;
	}
	return (node_count);
}
