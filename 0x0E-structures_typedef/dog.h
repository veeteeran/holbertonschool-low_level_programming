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
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
#endif /* DOG_H */
