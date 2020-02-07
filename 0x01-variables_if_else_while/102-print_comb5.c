#include <stdio.h>
/**
 * main - Entry point
 *
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int set_one;
	int set_two;

	for (set_one = 0; set_one < 99; set_one++)
	{
		for (set_two = 1; set_two < 100; set_two++)
		{
			putchar((set_one / 10) + '0');
			putchar((set_one % 10) + '0');
			putchar(' ');
			putchar((set_two / 10) + '0');
			putchar((set_two % 10) + '0');

			if (set_one == 98 && set_two == 99)
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
	return (0);
}
