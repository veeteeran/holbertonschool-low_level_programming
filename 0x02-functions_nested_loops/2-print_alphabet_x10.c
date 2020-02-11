#include "holberton.h"
/**
 * print_alphabet_x10 - prints lowercase alphabet 10 times
 */
void print_alphabet_x10(void)
{
	int letter = 'a';
	int i, j;

	i = 0;
	while (i < 10)
	{
		j = letter;
		while (j <= 'z')
		{
			_putchar(j++);
		}
		_putchar('\n');
		i++;
	}
}
