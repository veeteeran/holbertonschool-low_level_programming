#include "holberton.h"
/**
 * comma_3_spaces - prints comma and three spaces
 */
void comma_3_spaces(void)
{
	_putchar(',');
	_putchar(' ');
	_putchar(' ');
	_putchar(' ');
}
/**
 * comma_2_spaces - prints comma and two spaces
 */
void comma_2_spaces(void)
{
	_putchar(',');
	_putchar(' ');
	_putchar(' ');
}
/**
 * comma_space - prints comma and space
 */
void comma_space(void)
{
	_putchar(',');
	_putchar(' ');
}
/**
 * print_times_table - prints n times table starting at 0
 * @n: The number to multiply with from 1 to 9
 */
void print_times_table(int n)
{
	/* Initialize variables*/
	int i;
	int j;
	int k;

	for (i = 0; i <= n; i++)
	{
		if (n > 15 || n < 0)
			break;
		for (j = 0; j <= n; j++)
		{
			k = i * j;
			if (j == 0)
				_putchar('0');
			/* Values less than 10 can be added to ascii '0' */
			else if (k < 10)
			{
				comma_3_spaces();
				_putchar(k + '0');
			}
			/* Values greater than 10 digits printed separately */
			else if (k < 100)
			{
				comma_2_spaces();
				_putchar((k / 10) + '0');
				_putchar((k % 10) + '0');
			}
			else
			{
				comma_space();
				_putchar((k / 100) + '0');
				_putchar((k / 10) % 10 + '0');
				_putchar((k % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
