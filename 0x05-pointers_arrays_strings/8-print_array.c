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

	for (index = 0; index < n; index++)
	{
		if (index == 0)
		{
			printf("%d", a[0]);
		}
		else
		{
			printf(", %d", a[index]);
		}
	}
	printf("\n");
}
