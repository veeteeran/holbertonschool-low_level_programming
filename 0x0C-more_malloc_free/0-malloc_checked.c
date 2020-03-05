#include "holberton.h"
#include <stdlib.h>
/**
 * malloc_checked - allocates memory using malloc
 * @b: size of memory to allocate
 *
 * Return: nothing
 */
void *malloc_checked(unsigned int b)
{
	int *arr;

	arr = malloc(sizeof *arr * b);
	if (arr == NULL)
	{
		exit(98);
		return (NULL);
	}
	return (arr);
}
