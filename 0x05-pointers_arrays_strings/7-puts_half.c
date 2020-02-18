#include "holberton.h"
#include <stdio.h>
/**
 * _strlen - returns the length of a string
 * @s: the string to check
 *
 * Return: the length of a string as an int
 */
int _strlen(char *s)
{
	int counter;

	counter = 0;
	while (*(s + counter) != 0)
	{
		counter++;
	}
	return (counter);
}

/**
 * puts_half - prints half of a string then newline
 * @str: the string to print
 */
void puts_half(char *str)
{
	int length, half;

	length = _strlen(str) - 1;
	half = length / 2;
	printf("Length: %d half: %d\n", length, half);
	if (half % 2 != 0)
	{
		half = (length - 1) / 2;
		while (half < length)
		{
			_putchar(str[half]);
			half++;
		}
	}
	else
	{
		while (half < length)
		{
			_putchar(str[half]);
			half++;
		}
	}
	_putchar('\n');
}
