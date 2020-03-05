#include "holberton.h"
/**
 * _strchr - locates a character in a string
 * @s: the string in which to find the character
 * @c: the character to look for in the string
 *
 * Return: pointer to first occurrence of the character, nul if not found
 */
char *_strchr(char *s, char c)
{
	int ndx;

	for (ndx = 0; s[ndx] != '\0'; ndx++)
	{
		if (s[ndx] == c)
	{
			return ((&s[ndx]));
		}
	}
	if (c == '\0')
		return (&s[ndx]);
	return ('\0');
}
