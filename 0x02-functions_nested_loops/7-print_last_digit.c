#include "holberton.h"
/**
 * print_last_digit - print the last digit of n
 * @n: the number to check
 *
 * Return: last digit of n
 */
int print_last_digit(int n)
{
	int digit = n % 10;
	int positive = -digit;

	if (n < 0)
	{
		_putchar(positive + '0');
		return(positive);
	}

	_putchar(digit + '0');
	return (digit);
}
