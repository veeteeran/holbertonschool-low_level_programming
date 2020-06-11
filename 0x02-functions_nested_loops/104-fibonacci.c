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
	int i, back_next = 0, back_prev = 1, back_curr = 2;

	long double front_next = 0, front_prev = 0, front_curr = 0;

	printf("1, 2, ");
	for (i = 0; i < 96; i++)
	{
		back_next = back_prev + back_curr;
		front_next = front_prev + front_curr;
		if (back_next > 99999999)
		{
			back_next = back_next % 100000000;
			front_next += 1;
		}
		if (front_next == 0)
			printf("%d", back_next);
		else
		{
			printf("%.Lf", front_next);
			if (back_next < 9999999)
			{
				if (back_next < 999999)
					printf("0");
				printf("0%d", back_next);
			}
			else
				printf("%d", back_next);
		}
		if (i != 95)
			printf(", ");
		else
			printf("\n");
		back_prev = back_curr;
		back_curr = back_next;
		front_prev = front_curr;
		front_curr = front_next;
	}
	return (0);

}
