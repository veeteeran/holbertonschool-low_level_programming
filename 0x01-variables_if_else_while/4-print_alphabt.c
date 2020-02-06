#include <stdio.h>
/**
 * main - Entry point
 *
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c = 'a';
	int i;
	int length = 26;

	for (i = 0; i < length; i++)
	{
		if (c != 'e' && c != 'q')
			putchar(c);
		c++;
	}
	putchar('\n');

	return (0);
}
