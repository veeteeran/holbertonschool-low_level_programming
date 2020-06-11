#include "holberton.h"
/**
 * print_chessboard - prints the chessboard
 * @a: numbers of rows
 *
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	int rows, cols;

	for (rows = 0; rows < 8; rows++)
	{
		for (cols = 0; cols < 8; cols++)
		{
			_putchar(a[rows][cols]);
			if (cols == 7)
				_putchar('\n');
		}
	}
}
