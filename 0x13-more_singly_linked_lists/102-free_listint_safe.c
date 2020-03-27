#include "lists.h"
/**
 * free_listint_safe - free list_int safely
 * @h: pointer to pointer of the first node
 *
 * Return: number of nodes in the list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t node_count = 0;
	listint_t *temp;
	list_address_t *check_head;
	list_address_t *ch_temp;

	if (h == NULL || *h == NULL)
		return (node_count);

	check_head = NULL;
	temp = *h;
	while (temp)
	{
		ch_temp = check_head;
		while (ch_temp)
		{
			if (temp == ch_temp->ptr)
			{
				free_list_address_ptr2(&check_head, node_count);
				free_listint3(&(*(h)), node_count);
				return (node_count);
			}
			ch_temp = ch_temp->next;
		}
		node_count++;
		add_nodeptr(&(check_head), temp);
		temp = temp->next;
	}
	free_list_address_ptr2(&check_head, node_count);
	free_listint3(&(*(h)), node_count);
	return (node_count);
}

/**
 * free_listint3 - frees a listint_t list, sets the head to NULL
 * @head: pointer to pointer of first node
 *
 * Return: void
 */
void free_listint3(listint_t **head, size_t node_count)
{
	listint_t *temp;

	if (head == NULL) /* Why head and not *head */
		return;

	while (node_count > 0)
	{
		temp = *head;
		*head = temp->next;
		free(temp);
		node_count--;
	}
	*head = NULL;
}

/**
 * free_list_address_ptr2 - frees a list, sets the head to NULL
 * @head: pointer to pointer of first node
 *
 * Return: void
 */
void free_list_address_ptr2(list_address_t **head, size_t node_count)
{
	list_address_t *temp;

	if (head == NULL) /* Why head and not *head */
		return;

	while (node_count > 0)
	{
		temp = *head;
		*head = temp->next;
		free(temp);
		node_count--;
	}
	*head = NULL;
}
