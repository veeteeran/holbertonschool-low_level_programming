#include "dog.h"
#include <stdlib.h>
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
	ptr->name = name;
	ptr->age = age;
	ptr->owner = owner;

	return (ptr);
}
