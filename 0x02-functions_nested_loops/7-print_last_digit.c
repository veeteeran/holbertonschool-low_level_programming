#include "holberton.h"
/**
 * print_last_digit - print the last digit of n
 * @n: the number to check
 *
 * Return: last digit of n
 */
int print_last_digit(int n)
{
	int digit;
	
	if (n < 0)
	{
		n *= -1;
	}	

	digit = (n % 10);
	_putchar(digit +'0');
	
	return (digit);
}
