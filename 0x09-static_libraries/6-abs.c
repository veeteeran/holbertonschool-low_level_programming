#include "holberton.h"
/**
 * _abs - computes absolute value of an int
 * @n: The int to compute to abs
 *
 * Return: a, the absolute value
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	else
	{
		return (n);
	}
}
