#include "search_algos.h"

/**
 * exponential_search - searches for a value in a sorted array of
 * integers using the Interpolation search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: the value to search for
 *
 * Return: the first index where value is located, or -1
 * if value is not present in array or if array is NULL
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t index = 0, high;

	if (array == NULL || size == 0)
		return (-1);

	if (array[index] == value)
	{
		return (index);
	}
	index += 1;

	while (index < size && array[index] <= value)
	{
		printf("Value checked array[%ld] = [%d]\n", index,
			array[index]);
		index *= 2;
		high = index;
	}
	index /= 2;
	if (high >= size)
		high = size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", index, high);
	return (es_helper(array, (int)index, high + 1, value));
}

/**
 * es_helper - searches for a value in a sorted array of
 * integers using the Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @start: index where to start search
 * @size: number of elements in array
 * @value: the value to search for
 * 
 * Return: the index where value is located
 */

int es_helper(int *array, int start, size_t size, int value)
{
	int i, mid, end = (int)size - 1;

	if (array == NULL)
		return (-1);

	while (1)
	{
		printf("Searching in array: ");
		for (i = start; i <= end; i++)
		{
			printf("%d", array[i]);
			if (i < end)
				printf(", ");
		}
		printf("\n");
		mid = (start + end) / 2;
		if (value < array[mid])
			end = mid - 1;
		else
			start = mid + 1;

		if (value == array[mid])
			return (mid);
		else if (mid == end)
			return (-1);
	}
}
