#include "holberton.h"
#include <stdio.h>
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
