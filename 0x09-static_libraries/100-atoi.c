#include "holberton.h"
/**
 * _atoi - convert a string to an int
 * @s: the string to convert
 *
 * Return: an int representation of the string
 */
int _atoi(char *s)
{
	int digit = 0, num = 0, b_10 = 1;
	int start, end, ndx = 0, negative = 0;

	if(s[ndx] == '\0')
		return 0;
	while (s[ndx] && !(digit))
	{
		if (s[ndx] == '-')
			negative++;
		else if (s[ndx] >= '0' && s[ndx] <= '9')
			digit = 1;
		ndx++;
	}
	start = ndx - 1;
	while (s[ndx] && digit)
	{
		if (s[ndx] < '0' || s[ndx] > '9')
		{
			digit = 0;
			ndx--;
		}
		ndx++;
	}
	end = ndx - 1;
	while (end >= start)
	{
		num += ((s[end] - '0') * b_10);
		b_10 *= 10;
		end--;
	}
	if (negative != 0 && negative % 2 != 0)
		num *= -1;
	return (0 + num);
}
