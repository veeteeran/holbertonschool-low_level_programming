#include <stdio.h>
/**
 * main - Entry point
 *
 * Print lower case alphabet using only putchar()
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alpha[27] = "abcdefghijklmnopqrstuvwxyz";
	int i;
	char c;

	for (i = 0; i < 26; i++)
	{
		c = alpha[i];
		putchar(c);
	}
	putchar('\n');

	return (0);
}
