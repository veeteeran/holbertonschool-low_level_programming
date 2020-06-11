#include "holberton.h"
/**
 * string_toupper - changes lowercase letters to uppercase
 * @str: the string to check
 *
 * Return: the string in uppercase
 */
char *string_toupper(char *str)
{
	int index = 0;
	int upper = 32;

	while (str[index] != '\0')
	{
		if (str[index] >= 'a' && str[index] <= 'z')
		{
			str[index] -= upper;
		}
		index++;
	}
	return (str);
}
