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
	unsigned int i;
	unsigned int s1_len;
	unsigned int s2_len;

	if (s1 == NULL)
		s1 = "";
	else if (s2 == NULL)
		s2 = "";

	s1_len = _strlen(s1);
	s2_len = _strlen(s2);
	if (n <= s2_len)
		s2_len = n;

	arr = malloc(sizeof(char) * (s1_len + s2_len + 1));
	if (arr == NULL)
	{
		free(arr);
		return (NULL);
	}

	_strcpy(arr, s1);
	for (i = 0; i < s2_len; i++)
	{
		arr[s1_len + i] = s2[i];
	}
	arr[s1_len + s2_len] = '\0';
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

	if (s == NULL)
		counter = 0;
	else
	{
		for (counter = 0; s[counter] != '\0'; counter++)
		{
			continue;
		}
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
