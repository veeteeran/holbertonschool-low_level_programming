#include "holberton.h"
/**
 * rev_string - reverses a string
 * @s: the string to reverse
 */
void rev_string(char *s)
{
	int length, index, half, size, index2;
	char temp;

	size = 0;
	for (index = 0; s[index] != 0; index++)
	{
		size++;
	}

	length = size - 1;
	index2 = 0;
	half = size / 2;
	while (index2 < half)
	{
		temp = s[index2];
		s[index2] = s[length];
		s[length] = temp;
		index2++;
		length--;
	}
}
