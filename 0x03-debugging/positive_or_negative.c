#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * positive_or_negative - Determines if n is positive, negative or zero
 * @i: The number to check
 *
 * Return: 0 (Success)
 */
void positive_or_negative(int i)
{
	srand(time(0));
	i = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (i > 0)
		printf("%d is positive\n", i);
	else if (i < 0)
		printf("%d is negative\n", i);
	else if (i == 0)
		printf("%d is zero\n", i);
}
