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
	free(d->name);
	free(d->age);
	free(d->owner);
	free(d);
}
