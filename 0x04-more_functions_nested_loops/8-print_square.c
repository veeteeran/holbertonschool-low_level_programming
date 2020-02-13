#include "holberton.h"
/**
 * print_square - prints sqare followed by a newline
 * @size: the size of the square
 */
void print_square(int size)
{
	int rows, cols;

	if (size > 0)
	{
		for (rows = 0; rows < size; rows++)
		{
			for (cols = 0; cols < size; cols++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
