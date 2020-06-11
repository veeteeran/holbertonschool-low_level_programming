#include "holberton.h"
/**
 * _pow - find when i is equal to num
 * @i: start at one and count up
 * @num: the number of sqrt to find
 *
 * Return: the power equal to i
 */
int _pow(int i, int num)
{
	if ((i * i) < num)
		return (_pow((i + 1), num));
	else if ((i * i) == num)
		return (i);
	else
		return (-1);
}

/**
 * _sqrt_recursion - return the natural square root of a number
 * @n: the number whose square root is found
 *
 * Return: the natural square root, -1 if there is no natural sqrt
 */
int _sqrt_recursion(int n)
{
	int solution = _pow(1, n);

	return (solution);
}
