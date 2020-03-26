#include "holberton.h"
int _strlen(const char *s);
void rev_string(char *s);
char *_strcpy(char *dest, const char *src);
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to the binary string
 *
 * Return: converted number, 0 if b is NULL or non-binary nums in str
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int bin, dec = 0;
	int len, index;
	char *str;

	if (b == NULL)
		return (0);

	len = _strlen(b);
	str = malloc(sizeof(char) * len + 1);
	if (str == NULL)
		return ('\0');

	_strcpy(str, b);
	rev_string(str);

	bin = 1;
	for (index = 0; index < len; index++)
	{
		if (str[index] != '1' && str[index] != '0')
			return (0);
		if (str[index] == '0')
			dec += 0;
		else if (str[index] == '1')
			dec += bin;
		bin *= 2;
	}
	return (dec);
}

/**
 * _strlen -returns the length of a string
 * @s: the string to check
 *
 * Return: the length of a string as an int
 */
int _strlen(const char *s)
{
	int counter = 0;

	while (s[counter])
		counter++;

	return (counter);
}

/**
 * _strcpy - copy str and null byte from src to dest
 * @dest: the copy of the string
 * @src: the string to copy
 *
 * Return: the copied string
 */
char *_strcpy(char *dest, const char *src)
{
	int index;

	for (index = 0; *(src + index) != '\0'; index++)
	{
		*(dest + index) = *(src + index);
	}
	*(dest + index) = '\0';

	return (dest);
}

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
