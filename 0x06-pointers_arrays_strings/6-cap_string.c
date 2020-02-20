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


#include "holberton.h"
/**
 * cap_string - capitalizes first letters of words in a string
 * @str: the string of words to capitalize
 *
 * Return: the string with capitalized words
 */
char *cap_string(char *str)
{
	int count = 0;
	int length = _strlen(str);

	while (count < length)
	{
		while (str[count] == ' ' || str[count] == '\n' || str[count] == '\t' ||
			str[count] == ',' || str[count] == ';' || str[count] == '.' ||
			str[count] == '!' || str[count] == '?' || str[count] == '"' ||
			str[count] == '(' || str[count] == ')' || str[count] == '{' ||
			str[count] == '}')
		{
			count++;

			if (str[count] >= 'a' && str[count] <= 'z')
			{
				str[count] -= 32;
			}
		}
		count++;
	}
	return (str);
}
