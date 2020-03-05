#include "holberton.h"
#include <stdio.h>
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
		printf("1 - inside condition. n = %d\n", n);	
		n *= -1;
		printf("2 - Inside condition. n = %d\n", n);
	}

	digit = (n % 10);
	printf("3 - digit % 10 = %d", digit);
	_putchar(digit + '0');
	printf("4 - digit + '0' = %c", digit + '0');
	return (digit);
}
