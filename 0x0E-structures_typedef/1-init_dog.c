#include "dog.h"
/**
 * init_dog - initializes variable of struct type dog
 * @d:struct variable
 * @name: name of dog
 * @age: age of dog
 * @owner: name of owner
 *
 * Description: Initializes structure with struct name, and members
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
