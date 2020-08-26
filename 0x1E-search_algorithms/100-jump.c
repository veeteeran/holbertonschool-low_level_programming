#include "search_algos.h"

/**
 * jump_search - searches for a value in a sorted array of
 * integers using the Jump search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: the value to search for
 *
 * Return: the index where value is located, or -1
 * if value is not present in array or if array is NULL
 */
int jump_search(int *array, size_t size, int value)
{
	int low, high = 0;
	double result;

	if (array == NULL)
		return (-1);

	result = sqrt((double)size);

	while (1)
	{
		low = high;
		high += (int)result;
		printf("Value checked array[%d] = [%d]\n", low, array[low]);
		if (high > (int)size - 1)
		{
			printf("Value found between indexes [%d] and [%d]\n", low, high);
			return (js_helper(array, size, value, low));
		}
		else if (value >= array[low] && value <= array[high])
		{
			printf("Value found between indexes [%d] and [%d]\n", low, high);
			return (js_helper(array, high + 1, value, low));
		}
	}
	return (-1);
}

/**
 * js_helper - searches for a value in an array of integers
 * using the Linearsearch algorithm
 * @array: pointer to the first element of the array to search
 * @size: number of elements in array
 * @value: value to search for
 * @index: index to start search
 *
 * Return: the first index where value is located,
 * or -1 if value is not present in array or if array is NULL
 */

int js_helper(int *array, size_t size, int value, int index)
{
	int i;

	if (array == NULL)
		return (-1);

	for (i = index; i < (int)size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
