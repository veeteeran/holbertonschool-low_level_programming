#include <stdio.h>
/**
 * main - Entry point
 *
 * Print all single digit base 10 numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		printf("%d", i);
	}
	putchar('\n');

	return (0);
}
