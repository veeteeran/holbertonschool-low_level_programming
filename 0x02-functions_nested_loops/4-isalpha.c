#include "holberton.h"
/**
 * _isalpha - checks for alphabetic character
 * @c: The character to check
 *
 * Return: On success 1.
 * ON error, 0 is returned, and errno is set appropriately.
 */
int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
