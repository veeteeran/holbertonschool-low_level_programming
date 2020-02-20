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
 * _strcmp - compares 2 strings
 * @s1: first string to compare
 * @s2: second string to compare
 *
 * Return: negative, zero, or positive
 */
int _strcmp(char *s1, char *s2)
{
	int index = 0;
	int sum = 0;
	int len_s1 = _strlen(s1);
	int len_s2 = _strlen(s2);
	int larger;

	if (len_s1 > len_s2)
	{
		larger = len_s1;
	}
	else
	{
		larger = len_s2;
	}

	while (index < larger)
	{
		if (s1[index] == s2[index])
		{
			index++;
		}
		else
		{
			sum = s1[index] - s2[index];
			break;
		}
	}

	return (sum);
}
