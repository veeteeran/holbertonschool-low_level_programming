#include "holberton.h"
/**
 * _isdigit - Check for a digit 0-9
 * @c: The int to check
 *
 * Return: 1 if c is a digit, 0 otherwise
 */
int _isdigit(int c)
{
	if ((c >= 0 && c <= 9) || (c >= 48 && c <= 57))
		return (1);
	return (0);
}
