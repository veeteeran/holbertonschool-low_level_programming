#include "holberton.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: the int to work with
 * @index: the index to clear bit
 *
 * Return: 1 on success, -1 on error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(*n) * 8)
		return (-1);

	*n = (*n & ~(1 << index));
	return (1);
}
