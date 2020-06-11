#include "holberton.h"
/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: the string to compare
 * @accept: the bytes to compare against
 *
 * Return: pointer to byte in s that matches a byte in accept
 */
char *_strpbrk(char *s, char *accept)
{
	int s_ndx, a_ndx;

	for (s_ndx = 0; s[s_ndx] != '\0'; s_ndx++)
	{
		for (a_ndx = 0; accept[a_ndx] != '\0'; a_ndx++)
		{
			if (s[s_ndx] == accept[a_ndx])
				return (s + s_ndx);
		}
	}
	return ('\0');
}
