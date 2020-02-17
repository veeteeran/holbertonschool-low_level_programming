#include "holberton.h"
/**
 * swap_int - swaps the value of two ints
 * @a: pointer to an int to swap
 * @b: pointer to the other int to swap
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
