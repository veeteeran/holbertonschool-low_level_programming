#include "holberton.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers
 * @min: minimum int, start array
 * @max: maximum int, end of array inclusive
 *
 * Return: pointer to newly created array
 */
int *array_range(int min, int max)
{
	int *arr;
	int i, len;

	if (min > max)
		return (NULL);

	len = (max - min) + 1;
	arr = malloc(sizeof(int) * len);
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
	{
		arr[i] = min;
		min++;
	}
	return (arr);
}
