#include <stdio.h>
/**
 * main - Entry point
 *
 *
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	long double prev = 1;
	long double curr = 2;
	long double next;
	int i;

	printf("1, 2, ");
	for (i = 0; i < 96; i++)
	{
		next = prev + curr;
		printf("%.Lf", next);

		if (i != 95)
		{
			printf(", ");
		}
		else
		{
			printf("\n");
		}

		prev = curr;
		curr = next;
	}
	return (0);
}
