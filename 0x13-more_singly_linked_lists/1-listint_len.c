#include "lists.h"
/**
 * listint_len - returns the number of elements in a linked listint_t list
 * @h: pointer to first node
 *
 * Return: number of elements in linked list
 */
size_t listint_len(const listint_t *h)
{
	size_t node_count;

	while (h)
	{
		node_count++;
		h = h->next;
	}
	return (node_count);
}
