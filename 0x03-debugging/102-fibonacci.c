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
	long int prev = 1;
	long int curr = 2;
	long int next;
	int i;

	printf("1 2\n");
	for (i = 0; i <= 50; i++)
	{
		next = prev + curr;
		printf("%lu", next);

		if (i != 50)
		{
			printf(", ");
		}
		else if (i == 50)
		{
			printf("\n");
		}

		prev = curr;
		curr = next;
	}
	return (0);
}
