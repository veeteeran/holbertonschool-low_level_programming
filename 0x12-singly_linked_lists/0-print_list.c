#include "lists.h"
/**
 * print_list - prints all the elements of a list_t list
 * @h: pointer to head of linked list
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t num_nodes = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);

		num_nodes++;
		h = h->next;
	}

	return (num_nodes);
}
