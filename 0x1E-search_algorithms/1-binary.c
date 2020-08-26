#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of
 * integers using the Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: the value to search for
 *
 * Return: the index where value is located
 */

int binary_search(int *array, size_t size, int value)
{
	int i, mid, start = 0, end = (int)size - 1;

	if (array == NULL size == 0)
		return (-1);

	while (start <= end)
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
	return (-1);
}
