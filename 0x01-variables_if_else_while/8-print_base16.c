#include <stdio.h>
/**
 * main - Entry point
 *
 * Print all base 16 numbers in lower case
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	int j;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}
	for (j = 97; j < 103; j++)
	{
		putchar(j);
	}
	putchar('\n');

	return (0);
}
