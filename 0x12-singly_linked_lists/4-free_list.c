#include "lists.h"
/**
 * free_list - frees a list_t list
 * @head: pointer to head of list
 *
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *temp;

	temp = head;
	while (temp)
	{
		temp = temp->next;
		free(head->str);
		free(head);
		head = temp;
	}
	free(temp);
	free(head);
}
