#include "holberton.h"
unsigned long int _pow_recursion(unsigned long int x, int y);
/**
 * print_binary - prints the binary representation of a number
 * @n: number to represent as binary
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned int bin_place;
	int exponent = 0;

	if (n == 0)
		_putchar('0');

	bin_place = _pow_recursion(2, exponent);
	while (bin_place <= n)
	{
		exponent++;
		bin_place = _pow_recursion(2, exponent);
	}

	exponent--;
	bin_place = _pow_recursion(2, exponent);
	while (exponent >= 0)
	{
		if (bin_place > n)
			_putchar('0');
		else
		{
			_putchar('1');
			n -= bin_place;
		}
		exponent--;
		bin_place = _pow_recursion(2, exponent);
	}
}

/**
 * _pow_recursion - return the value of x to power of y
 * @x: the number to raise
 * @y: power to raise x to
 *
 * Return: x raised to y
 */
unsigned long int _pow_recursion(unsigned long int x, int y)
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
