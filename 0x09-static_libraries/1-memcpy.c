#include "holberton.h"
/**
 * _memcpy - copies a memory area
 * @dest: destnation string copied to
 * @src: source string copied from
 * @n: number of bytes to copy
 *
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int ndx;

	for (ndx = 0; ndx < n; ndx++)
	{
		dest[ndx] = src[ndx];
	}
	return (dest);
}
