#include "holberton.h"
#include <stdio.h>
/**
 * _atoi - change a string to an int
 * @s: the string to change
 *
 * Return: an integer
 */
int _atoi(char *s)
{
	int len = 0;
	int num = 0;
	int b_10 = 1;

	while (s[len])
	{
		len++;
	}
	len -= 1;
	while (len  > 0)
	{
		num += (s[len] - '0') * b_10;
		b_10 *= 10;
		len--;
	}
}

/**
 * infinite_add - adds a string of two numbers
 * @n1: the first string of numbers
 * @n2: the second string of numbers
 * @r: the buffer that will store the result
 * @size_r: the buffer size
 *
 * Return: a string of the added strings
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int num1, num2;
	
	num1 = _atoi(n1);
	num2 = _atoi(n2);
	printf("num1: %d num2: %d\n", num1, num2);
	return (0);
}
