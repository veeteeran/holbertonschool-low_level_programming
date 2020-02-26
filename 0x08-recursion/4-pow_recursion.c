#include "holberton.h"
/**
 * _pow_recursion - return the value of x to power of y
 * @x: the number to raise
 * @y: power to raise x to
 *
 * Return: x raised to y
 */
int _pow_recursion(int x, int y)
{
	if (y > 0)
	{
		return (x * _pow_recursion(x, y - 1));
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (-1);
	}
}
