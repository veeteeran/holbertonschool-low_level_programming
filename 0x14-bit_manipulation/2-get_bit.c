#include "holberton.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: the number to work with
 * @index: index of the bit
 *
 * Return: value of bit at index or -1 on error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int bit;

	if (index > sizeof(unsigned long int) * 8)
		return (-1);

	bit = (n >> index);
	return (bit & 1);
}
