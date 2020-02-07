#include <stdio.h>
/**
 * main - Entry point
 *
 * Print numbers 00-99 comma separated using putchar
 * Do not print same combo of digits 01 and 10 are considered the same
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int zero, nine, comma, space;
	int counter;
	int i, j;

	zero = 48;
	nine = 57;
	comma = 44;
	space = 32;
	counter = 1;
	for (i = zero; i <= nine; i++)
	{
		j = zero;
		if (i > zero)
			j += counter;
		while (j <= nine)
		{
			putchar(i);
			putchar(j);
			if (i == (nine - 1) && j == nine)
				putchar('\n');
			else
			{
				putchar(comma);
				putchar(space);
			}
			j++;
		}
		counter++;
	}

	return (0);
}
