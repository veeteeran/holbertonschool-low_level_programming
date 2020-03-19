#include "lists.h"
int _strlen(const char *s);
/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: pointer to pointer of struct
 * @str: data to enter for first member of struct
 *
 * Return: the address of the new element at end of linked list
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new = (list_t *)malloc(sizeof(list_t));
	list_t *temp;

	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	new->len = _strlen(str);
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}
	temp = *head;
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = new;
	return (new);
}

/**
 * _strlen - function that returs the length of a string
 *@s: string input by a user
 * Return: (void)
 */
int _strlen(const char *s)
{
	int len;

	for (len = 0; s[len] != '\0'; len++)
		;

	return (len);
}
