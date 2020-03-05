#include "holberton.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: the source of substring
 * @accept: the number of bytes from accept
 *
 * Return: number of bytes of s that consist of accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	unsigned int counter = 0;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				counter++;
				break;
			}
			else if (*s != *accept && *s == '\0')
			{
				return (counter);
			}
		}
	}
	return (counter);
}
