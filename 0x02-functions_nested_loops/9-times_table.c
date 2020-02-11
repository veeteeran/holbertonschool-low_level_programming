#include "holberton.h"
/**
 * times_table - prints 9 times table starting at 0
 */
void times_table(void)
{
	/* Initialize variables*/
	int i;
	int j;
	int k;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			k = i * j;
			if (j == 0)
			{
				_putchar('0');
			}
			/* Values less than 10 can be added to ascii '0' */
			else if (k < 10)
			{
				_putchar(',');
				_putchar(' '):
				_putchar(' ');
				_putchar(k + '0');
			}
			/* Values greater than 10 digits printed separately */
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar((k / 10) + '0');
				_putchar((k % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
