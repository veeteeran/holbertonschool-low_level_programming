#include "holberton.h"
/**
 * _abs - computes absolute value of an int
 * @a: The int to compute to abs
 *
 * Return: a, the absolute value
 */
int _abs(int a)
{
	if (a < 0)
	{
		return (a * -1);
	}
	else
	{
		return (a);
	}
}
