#include "holberton.h"
#include <stdio.h>
/**
 * print_diagsums - prints sum of square matrix of ints
 * @a: row in matrix
 * @size: size of the square

 */
void print_diagsums(int *a, int size)
{
	int sum1, sum2, rows, cols;

	rows = cols = sum1 = sum2 = 0;

	while (rows < size)
	{
		sum1 += *(a + (size * rows) + cols);
		rows++;
		cols++;
	}

	rows = 0;
	cols = size - 1;
	while (cols >= 0)
	{
		sum2 += *(a + (size * rows) + cols);
		rows++;
		cols--;
	}

	printf("%d, %d\n", sum1, sum2);
}
