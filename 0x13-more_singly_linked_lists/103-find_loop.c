#include "lists.h"
/**
 * find_loop - finds the loop in a linked list
 * @head: pointer to pointer of the first node
 *
 * Return: address of the node where loop starts, NULL if no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *tortoise;
	listint_t *hare;

	tortoise = head;
	hare = head;
	while (hare->next->next)
	{
		tortoise = tortoise->next;
		hare = hare->next->next;

		if (tortoise == hare)
		{
			tortoise = head;
			while (hare)
        		{
                		tortoise = tortoise->next;
                		hare = hare->next;

                		if (hare == tortoise)
                        		return (tortoise);
        		}
		}
	}

	return (NULL);
}	
