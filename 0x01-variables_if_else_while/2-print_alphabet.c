#include <string.h>
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
	int i = 0;
	char c = alpha[i];
	for (i = 0; i < 27; i++)
	{
		putchar(c);
	}
	putchar('\n');

	return (0);
}
