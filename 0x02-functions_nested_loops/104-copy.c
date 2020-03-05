#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 *
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int prev = 1;
	int curr = 2;
	int next;
	int i;
	char i_to_s[25];

	printf("1, 2, ");
	for (i = 0; i < 46; i++)
	{
		next = prev + curr;
		printf("%d", next);

		if (i != 45)
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
	itoa(next, i_to_s, 10);
	return (0);
}
