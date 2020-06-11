#include "holberton.h"
/**
 * print_line - Draw a straight linne in the terminal
 * @n: the number of time to print _
 *
 */
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
