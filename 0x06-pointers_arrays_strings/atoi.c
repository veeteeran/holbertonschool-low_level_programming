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
	return (num);
}
