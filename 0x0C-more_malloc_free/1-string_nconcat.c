#include "holberton.h"
#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings
 * @s1: string to copy
 * @s2: string to concatenate
 * @n: number of bytes of s to concatenate
 *
 * Return: pointed to memory location of concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *arr;
	unsigned int s1_len;
	unsigned int s2_len;

	if (s1 == NULL)
		s1 = "";
	else if (s2 == NULL)
		s2 = "";

	s1_len = _strlen(s1);
	s2_len = _strlen(s2);
	if (n >= s2_len)
		n = s2_len;

	arr = malloc(sizeof(char) * (s1_len + n + 1));
	if (arr == NULL)
	{
		free(arr);
		return (NULL);
	}
	_strcpy(arr, s1);
	_strncat(arr, s2, n);
	return (arr);
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

/**
 * _strcat - concatenates two strings
 * @dest: string appended to
 * @src: string appened to dest
 *
 * Return: the concatenated string
 */
char *_strcat(char *dest, char *src)
{
	int counter, dest_index;

	dest_index = 0;
	while (dest[dest_index] != 0)
	{
		dest_index++;
	}

	counter = 0;
	/* does this need to be src or dest? */
	while (src[counter] != 0)
	{
		dest[dest_index] = src[counter];
		dest_index++;
		counter++;
	}
	dest[dest_index] = '\0';
	return (dest);
}
