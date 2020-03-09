#ifndef DOG_H
#define DOG_H
/**
 * struct dog - gathers information about a dog
 * @name: name of dog
 * @age: age of dog
 * @owner: name of owner
 *
 * Description: The struct contains basic information about a dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
#endif /* DOG_H */
