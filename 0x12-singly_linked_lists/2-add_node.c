#include "lists.h"
int _strlen(const char *s);
/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: pointer to pointer of struct
 * @str: data to enter for first member of struct
 *
 * Return: the number of elements in a linked list
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	new->len = _strlen(str);
	new->next = *head;
	*head = new;
	if (new->str == NULL)
		return (NULL);
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
