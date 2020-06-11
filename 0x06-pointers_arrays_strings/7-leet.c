#include "holberton.h"
/**
 * leet - encode a string into 1337
 * @str: the string to encode
 *
 * Return: the encoded string
 */
char *leet(char *str)
{
	int index;
	int letter = 0;
	char leet[] = "AEOTL43071";

	while (str[letter] != 0)
	{
		index = 0;
		while (index < 5)
		{
			if (str[letter] == leet[index] || str[letter] - 32 == leet[index])
			{
				str[letter] = leet[index + 5];
			}
			index++;
		}
		letter++;
	}
	return (str);
}
