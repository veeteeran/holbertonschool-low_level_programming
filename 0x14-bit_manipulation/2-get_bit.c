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
	unsigned int count;

	for (count = 0; count < index; count++)
	{
		n = (n >> 1);
	}
	return (n & 1);
}
