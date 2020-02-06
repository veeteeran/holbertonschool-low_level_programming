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
	int i = 0;

	while (i <= len_alpha)
	{
		putchar(alpha[i]);
		i++;
	}
	putchar('\n');

	return (0);
}
