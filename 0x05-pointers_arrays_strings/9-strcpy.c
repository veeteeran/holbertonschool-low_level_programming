#include "holberton.h"
/**
 * _strcpy - copy str and null byte pointed to by src to buffer pointed to by dest
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
