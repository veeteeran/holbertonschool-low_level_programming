#include "holberton.h"
#include <stdio.h>
/**
 * print_number - print an int
 * @n: the int to print
 */
void print_number(int n)
{
	int counter, digit;
	int base_ten = 1000000000;
	int skip_zero = 1;
	int min  = -2147483648;

	counter = 0;
	while (counter < 9)
	{
		if (n < 0)
		{
			if (n == min)
			{
				n += 1;
			}
			n *= -1;
			_putchar('-');
		}

		digit = (n / base_ten) % 10;

		if (digit == 0 && skip_zero)
		{
			base_ten /= 10;
		}
		else
		{
			skip_zero = 0;
			_putchar(digit + '0');
			base_ten /= 10;

		}
		counter++;
	}
	_putchar(n % 10 + '0');
	
}
