#include "holberton.h"
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
	int was_min = 0;

	counter = 0;
	while (counter < 9)
	{
		/* check for negative int */
		if (n < 0)
		{
			/* add one to min_int to avoid errors*/
			if (n == min)
			{
				n += 1;
				was_min = 1;
			}
			n *= -1;
			_putchar('-');
		}
		/* avoids roblems when next digit it zero */
		digit = (n / base_ten) % 10;
		/* decrease base_ten until reaches first place */
		if (digit == 0 && skip_zero)
			base_ten /= 10;
		else
		{
			skip_zero = 0;
			_putchar(digit + '0');
			base_ten /= 10;

		}
		counter++;
	}
	/* check if num was min_int and add 1 tp output accordingly */
	if (was_min > 0)
		_putchar(n % 10 + '1');
	else
		_putchar(n % 10 + '0');
}
