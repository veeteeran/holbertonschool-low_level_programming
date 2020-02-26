#include "holberton.h"
/**
 * factorial - return the factorial of a given number
 * @n: the number to factorialize
 *
 * Return: the factorial or -1 if n less than 0
 */
int factorial(int n)
{
	if (n > 0)
	{
		return (n * factorial(n - 1));
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (-1);
	}
}
