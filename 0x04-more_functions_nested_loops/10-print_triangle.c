#include "holberton.h"
/**
 * print_triangle - print triangle followed by a newline
 * @size: size of the triangle
 */
void print_triangle(int size)
{
	int rows, spaces, hashes;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (rows = 0; rows < size; rows++)
		{
			for (spaces = 1; spaces < size - rows; spaces++)
			{
				_putchar(' ');
			}
			for (hashes = 0; hashes <= rows; hashes++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
