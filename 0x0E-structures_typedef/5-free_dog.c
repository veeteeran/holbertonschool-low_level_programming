#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - frees memory from dog struct
 * @d: pointer to struct
 *
 * Return: nothing
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
	}
	free(d);
}
