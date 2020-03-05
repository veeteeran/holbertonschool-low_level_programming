#include "holberton.h"
#include <stdlib.h>
/**
 * malloc_checked - allocate memory using malloc
 * @b: size of memory to allocate
 *
 * Return: nothing
 */
void *malloc_checked(unsigned int b)
{
	unsigned int *size = malloc(sizeof *size * b);

	if (size == NULL)
	{
		exit(98);
		return (NULL);
	}
	return (size);
}
