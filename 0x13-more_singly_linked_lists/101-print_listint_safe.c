#include "lists.h"
list_address_t *add_nodeptr(list_address_t **head, const listint_t *ptr);
/**
 * print_listint_safe - prints a listint_t linked list
 * @head: pointer to pointer of the first node
 *
 * Return: number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t node_count = 0;
	const listint_t *temp;
	list_address_t *check_head;
	list_address_t *ch_temp;

	if (head == NULL)
		return (node_count);

	check_head = NULL;
	temp = head;
	while (temp)
	{
		ch_temp = check_head;
		while (ch_temp)
		{
			if (temp == ch_temp->ptr)
			{
				printf("-> [%p] %d\n", (void *)temp, temp->n);
				return (node_count);
			}
			ch_temp = ch_temp->next;
		}
		printf("[%p] %d\n", (void *)temp, temp->n);
		node_count++;
		add_nodeptr(&(check_head), temp);
		temp = temp->next;
	}
	return (node_count);
}

/**
 * add_nodeptr - add a list_address_t node ptr
 * @head: pointer to the pointer of the first node
 * @ptr: the node being pointed to
 *
 * Return: the adress of the new node
 */
list_address_t *add_nodeptr(list_address_t **head, const listint_t *ptr)
{
	list_address_t *new = malloc(sizeof(list_address_t));

	if (new == NULL)
		return (NULL);

	new->ptr = ptr;
	new->next = *head;
	*head = new;
	return (new);
}
