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
 * _strncat - concatenates two strings, at most n bytes from source
 * @dest: string appended to
 * @src: string to append to dest
 * @n: number of bytes from src
 *
 * Return: concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	int start = _strlen(dest);
	int len_src = _strlen(src);
	int index = 0;

	if (len_src < n)
	{
		while (len_src > 0)
		{
			dest[start] = src[index];
			start++;
			index++;
			len_src--;
		}
		dest[start] = '\0';
	}
	else
	{
		while (n > 0)
		{
			dest[start] = src[index];
			start++;
			index++;
			n--;
		}
	}

	return (dest);
}
