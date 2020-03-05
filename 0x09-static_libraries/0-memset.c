#include "holberton.h"
/**
 * _memset - fills memory with a constant byte
 * @s: the string to fill with b
 * @b: the char to fill s with
 * @n: the number of bytes to fill s with b
 *
 * Return: s filled with n bytes of b
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int ndx = 0;

	for (ndx = 0; ndx < n; ndx++)
	{
		s[ndx] = b;
	}
	return (s);
}
