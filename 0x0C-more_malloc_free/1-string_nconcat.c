#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * string_nconcat - concatenates two strings
 * @s1: the starting string
 * @s2: the concatenated string
 * @n: numbers of byte from s2 to concatenate
 *
 * Return: pointer to newly allocated space in memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *cat_str;
	int len;

	len = _strlen(s1);
	cat_str = malloc(sizeof *cat_str * (len + n + 1));
	if (cat_str == NULL)
		return (NULL);

	_strcpy(cat_str, s1);
	_strncat(cat_str, s2, n);
	return (cat_str);
}
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
 * _strcpy - copy str and null byte from src to dest
 * @dest: the copy of the string
 * @src: the string to copy
 *
 * Return: the copied string
 */
char *_strcpy(char *dest, char *src)
{
	int index;
	for (index = 0; *(src + index) != 0; index++)
	{
		*(dest + index) = *(src + index);
	}
	*(dest + index) = '\0';
	return (dest);
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


