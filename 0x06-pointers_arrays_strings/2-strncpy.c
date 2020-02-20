#include "holberton.h"
/**
 * _strlen - returns the length of a string
 * @s: the string to check
 *
 * Return: the length of a string as an int
 */
int _strlen(char *s)
{
	int counter;

	for (counter = 0; s[counter] != '\0'; counter++)
	{
		continue;
	}
	return (counter);
}

/**
 * _strncpy - copies a string
 * @dest: the destination of the copy
 * @src: the source of the copy
 * @n: copy from n bytes
 *
 * Return: the copied string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int count = 0;
	int len_src = _strlen(src);

	if (len_src > n)
	{
		while (count < n)
		{
			dest[count] = src[count];
			count++;
		}
	}
	else
	{
		while (src[count] != 0)
		{
			dest[count] = src[count];
			count++;
		}
		while (count < n)
		{
			dest[count] = '\0';
			count++;
		}
	}
	return (dest);
}
