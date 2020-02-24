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
	int a_size = 0;
	int  s_ndx, a_ndx;
	unsigned int count = 0;

	while (accept[a_size])
	{
		a_size++;
	}
	for (s_ndx = 0; s[s_ndx] != '\0'; s_ndx++)
	{
		for (a_ndx = 0; accept[a_ndx] != '\0'; a_ndx++)
		{
			if (s[s_ndx] == accept[a_ndx])
			{
				count++;
				break;
			}
			else if (a_ndx == a_size - 1 && s[s_ndx] != accept[a_size - 1])
				return (count);
		}
	}
	return (count);
}
