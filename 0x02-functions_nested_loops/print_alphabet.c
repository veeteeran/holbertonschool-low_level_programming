#include "holberton.h"
/**
 * print_alphabet - print alphabet in lowercase
 */
void print_alphabet(void)
{
	int letter = 'a';
	int i = 0;

	for (i = 0; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
