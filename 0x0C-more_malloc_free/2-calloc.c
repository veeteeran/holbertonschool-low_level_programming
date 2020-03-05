#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
int *put_zero(int *arr, int nmemb);
/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: number of elements in the array
 * @size: size of each array element
 *
 * Return: nothing
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *arr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	arr = malloc(size * nmemb);
	if (arr == NULL)
		return (NULL);
	put_zero(arr, nmemb);
	return (arr);
}

/**
 * put_zero - fills an array with zeros
 * @arr: the array to fill
 * @ nmemb: number of array elements
 *
 * Return: the array filled with zeros
 */
int *put_zero(int *arr, int nmemb)
{
	int i;

	for (i = 0; i < nmemb; i++)
	{
		arr[i] = 0;
		if (i < 10)
			printf("arr[%d]: %d\n", i, arr[i]);
	}
	return (arr);
}
