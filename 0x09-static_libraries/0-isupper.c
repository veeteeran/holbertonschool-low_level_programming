#include "holberton.h"
/**
 * _isupper - checks for uppercase character
 * @c: The character to check
 *
 * Return: 1 is c is uppercase, 0 if not uppercase
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);

	return (0);
}
