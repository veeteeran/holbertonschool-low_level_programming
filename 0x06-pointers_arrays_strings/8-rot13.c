#include "holberton.h"
/**
 * rot13 - encode a string using rot13
 * @str: the string to encode
 *
 * Return: the encoded string
 */
char *rot13(char *str)
{
	int idx1 = 0;
	int idx2;
	char alpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (str[idx1] != '\0')
	{
		idx2 = 0;
		while (idx2 < 52)
		{
			if (str[idx1] == alpha[idx2])
			{
				str[idx1] = rot[idx2];
				break;
			}
			idx2++;
		}
		idx1++;
	}
	return (str);
}
