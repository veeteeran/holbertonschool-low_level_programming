#include "holberton.h"
/**
 * reverse_array - reverse an array of ints
 * @a: the array to reverse
 * @n: the number of array elements
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int start = 0;
	int end = n - 1;
	int temp;

	while (start < n / 2)
	{
		temp = a[start];
		a[start] = a[end];
		a[end] = temp;

		start++;
		end--;
	}
}
