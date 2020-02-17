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
	/* possible change counter to 1 */
	while (*s != 0)
	{
		s++;
		counter++;
	}
	return (counter);
}
