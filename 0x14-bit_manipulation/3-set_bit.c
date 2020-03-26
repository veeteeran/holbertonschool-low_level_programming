#include "holberton.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: pointer to the int
 * @index: index to set
 *
 * Return: 1 on success, -1 on error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(*n) * 8)
		return (-1);

	*n = (*n | (1 << (index)));
	return (1);
}
