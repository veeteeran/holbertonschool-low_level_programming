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

	counter = 0;
	while (*(s + counter) != 0)
	{
		counter++;
	}
	return (counter);
}
#include "holberton.h"
/**
 * rev_string - reverses a string
 * @s: the string to reverse
 */
void rev_string(char *s)
{
	int length, index, half;
	char temp;

	length = _strlen(s) - 1;
	half = length / 2;

	for (index = 0; index < half; index++)
	{
		temp = s[index];
		s[index] = s[length];
		s[length] = temp;
		length--;
	}
}
