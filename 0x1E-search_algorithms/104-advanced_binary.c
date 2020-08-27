#include "search_algos.h"

/**
 * advanced_binary - searches for a value in a sorted array of
 * integers using the Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: the value to search for
 *
 * Return: the index where value is located
 */

int advanced_binary(int *array, size_t size, int value)
{
	int i, mid, start = 0, end = (int)size - 1;

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
		{
			while (value == array[mid - 1])
				mid--;
			return (mid);
		}
		else if (mid == end)
			return (-1);
	}
}
