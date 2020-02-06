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
	int len_alpha = strlen(alpha);
	int i;

	for (i - 0; i <= len_alpha; i++)
	{
		putchar(alpha[i]);
	}
	putchar('\n');

	return (0);
}
