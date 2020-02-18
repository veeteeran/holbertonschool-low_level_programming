#include "holberton.h"
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
 * puts2 - prints every other char of string starting with first char
 * @str: the string to print
 */
void puts2(char *str)
{
	int index, length;

	index = 0;
	length = _strlen(str);
	while (index < length)
	{
		_putchar(str[index]);
		index += 2;
	}
	_putchar('\n');
}
