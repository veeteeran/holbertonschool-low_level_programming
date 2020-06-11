#include <stdio.h>
/**
 * main - Entry point
 *
 * Print all combos of three digits without same combos
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int hundreds;
	int tens;
	int ones;

	for (hundreds = 0; hundreds < 8; hundreds++)
	{
		for (tens = 1 + hundreds; tens < 9; tens++)
		{
			for (ones = 1 + tens; ones < 10; ones++)
			{
				putchar(hundreds + '0');
				putchar(tens + '0');
				putchar(ones + '0');

				if (hundreds == 7 && tens == 8 && ones == 9)
				{
					putchar('\n');
				}
				else
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	return (0);
}
