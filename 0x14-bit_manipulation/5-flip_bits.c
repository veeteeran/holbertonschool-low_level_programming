#include "holberton.h"

/**
 * flip_bits - flip bits to get from one number to another
 * @n: the number to flip
 * @m: flip to this number
 *
 * Return: number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int mask;
	unsigned int sum = 0;

	mask = n ^ m;
	while (mask > 0)
	{
		sum += mask & 1;
		mask >>= 1;
	}
	return (sum);
}
