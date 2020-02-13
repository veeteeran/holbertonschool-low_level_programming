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
	double prev = 1;
	double curr = 2;
	double next;
	int i;

	printf("1, 2, ");
	for (i = 0; i < 96; i++)
	{
		next = prev + curr;
		printf("%.f", next);

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
