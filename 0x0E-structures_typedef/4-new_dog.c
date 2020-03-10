#include "dog.h"
#include <stdlib.h>
int _strlen(char *s);
char *_strdup(char *str);
/**
 * new_dog - create a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: name of owner
 *
 * Return: NULL if function fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr;

	ptr = malloc(sizeof(dog_t));
	if (ptr == NULL)
		return (NULL);
	ptr->name = _strdup(name);
	ptr->age = age;
	ptr->owner = _strdup(owner);

	return (ptr);
}

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * contains a copy of the string given as a parameter
 * @str: string to copy to newly allocated space
 *
 * Return: ponter to allocated space
 */
char *_strdup(char *str)
{
	char *ptr;
	int len, ndx;

	if (str == NULL)
	{
		return (NULL);
	}

	len = _strlen(str) + 1;
	ptr = (char *) malloc(len * sizeof(char));
	if (ptr == NULL)
	{
		return (NULL);
	}
	len = _strlen(str);
	ndx = 0;
	while (str[ndx] != '\0')
	{
		ptr[ndx] = str[ndx];
		ndx++;
	}
	ptr[ndx] = '\0';
	return (ptr);
}

/**
 * _strlen - returns the length of a string
 * @s: the string to check
 *
 * Return: the length of a string as an int
 */
int _strlen(char *s)
{
	int counter;

	for (counter = 0; s[counter] != '\0'; counter++)
	{
		continue;
	}
	return (counter);
}
