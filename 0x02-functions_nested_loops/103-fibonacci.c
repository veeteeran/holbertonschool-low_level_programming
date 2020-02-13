#include <stdio.h>
/**
 * main - Entry point
 *
 * Prints the summed even fibonnaci numbers up to max_num
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int prev = 1;
	long int curr = 2;
	long int next = 0;
	long int max_num = 4000000;
	long int sum = 2;

	while (next < max_num)
	{
		next = prev + curr;
		/* Add to sum only even terms */
		if (next % 2 == 0)
			sum += next;
		/* Reassign variables to hold new values */
		prev = curr;
		curr = next;
	}
	/* Print the sum */
	printf("%lu\n", sum);
	return (0);
}
