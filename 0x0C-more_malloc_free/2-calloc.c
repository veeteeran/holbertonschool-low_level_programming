#include "holberton.h"
#include <stdlib.h>
/**
 * calloc - allocates memory for an array using alloc
 * nmemb: number of elements in the array
 * @size: size of each element
 *
 * Return: pointer to memory location of the array
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *arr;
	int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	arr = malloc(nmemb * size);
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < nmemb; i++)
	{
		arr[i] = 0;
	}
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
