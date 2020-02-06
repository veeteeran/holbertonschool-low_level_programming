#include <stdio.h>
/**
 * main - Entry point
 *
 * Print lower then uppercase alpha
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char lower[27] = "abcdefghijklmnopqrstuvwxyz";
	char upper[27] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;
	int j;
	for (i = 0; i < 26; i++)
	{
		putchar(lower[i]);
	}
	
	for (j = 0; j < 26; j++)
	{
		putchar(upper[j]);
	}

	putchar('\n');

	return (0);
}
