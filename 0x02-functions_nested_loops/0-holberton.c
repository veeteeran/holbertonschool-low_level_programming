#include "holberton.h"
/**
 * main - Entry point
 *
 * Prints Holberton followed my a newline
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char str[] = "Holberton";
	int i;

	for (i = 0; i < 9; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');

	return (0);
}
