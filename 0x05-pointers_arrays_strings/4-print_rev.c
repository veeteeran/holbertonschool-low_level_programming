#include "holberton.h"
/**
 * _strlen -returns the length of a string
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
 * print_rev - prints a string in reverse
 * @s: the string to print
 */
void print_rev(char *s)
{
	int length;

	length = _strlen(s) - 1;
	while (length >= 0)
	{
		_putchar(s[length]);
		length--;
	}
	_putchar('\n');
}
