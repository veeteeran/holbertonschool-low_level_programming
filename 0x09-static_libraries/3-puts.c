#include "holberton.h"
#include <stdio.h>
/**
 * _puts - print a string followed by a newline
 * @str: the string to print
 */
void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
