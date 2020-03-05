#include "holberton.h"
#include <stdlib.h>
/**
 * _calloc - allocates memory for an array using alloc
 * @nmemb: number of elements in the array
 * @size: size of each element
 *
 * Return: pointer to memory location of the array
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *arr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	arr = malloc(nmemb * size);
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
	{
		arr[i] = 0;
	}
	return (arr);
}

