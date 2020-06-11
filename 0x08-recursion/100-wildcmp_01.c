#include "holberton.h"
/**
 * wildcmp - compares two strings
 * @s1: the regular string
 * @s2: string with wildcard chars
 *
 * Return: 1 if identical, 0 otherwise
 */
int wildcmp(char *s1, char *s2)
{
        if (*s1 == '\0' && *s2 == '\0')
                return (1);
	else if (*s1 == '\0' || *s2 == '\0')
		return (0);
	else if (*s2 == '*')
	{
		
	}
        else if (*s1 == *s2)
                return (wildcmp(s1 + 1, s2 + 1));
        return (0);
}
