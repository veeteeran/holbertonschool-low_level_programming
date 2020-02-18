#include "holberton.h"
#include <stdio.h>
/**
 * print_array - prints n elements of array of int followed by a newline
 * @a: pointer to the array
 * @n: size of the array
 *
 * Returns: nothing
 */
void print_array(int *a, int n)
{
	int index;

	if (a == NULL)
		return;
	else if (n < 0 || n > (int) (sizeof(a) / sizeof(a[0])))
	{
		return;
	}

	index = 0;
	for (index = 0; index < n; index++)
	{
		printf("%d", *(a + index));
		if (index == n - 1)
		{
			printf("\n");
		}
		else
		{
			printf(", ");
		}
	}
}
