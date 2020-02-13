#include "holberton.h"
/**
 * print_diagonal - draw a diagonal on the terminal
 * @n: the number of times to print \
 */
void print_diagonal(int n)
{
	int rows, columns;

	if (n > 0)
	{

		for (rows = 0; rows < n; rows++)
		{
			for (columns = 0; columns < rows; columns++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
