#include "lists.h"
/**
 * find_listint_loop - finds the loop in a linked list
 * @head: pointer to pointer of the first node
 *
 * Return: address of the node where loop starts, NULL if no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *tortoise;
	listint_t *hare;

	if (head == NULL || head->next == NULL)
		return (NULL);
	tortoise = head;
	hare = head;
	while (hare->next && hare->next->next)
	{
		tortoise = tortoise->next;
		hare = hare->next->next;

		if (tortoise == hare)
		{
			tortoise = head;
			while (hare)
			{
				if (hare == tortoise)
					return (tortoise);

				tortoise = tortoise->next;
				hare = hare->next;
			}
		}
	}

	return (NULL);
}
