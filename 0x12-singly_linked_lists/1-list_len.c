#include "lists.h"
/**
 * list_len - returns the number of elements in a linked
 * @h: pointer to head of linked list
 *
 * Return: the number of elements in a linked list
 */
size_t list_len(const list_t *h)
{
	size_t num_elems = 0;

	while (h)
	{
		num_elems++;
		h = h->next;
	}
	return (num_elems);
}
