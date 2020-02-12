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
	long int next;
	int i;
	long int sum = 0;

	for (i = 0; i <= next; i++)
	{
		/* next gets next fibonnaci number by summing prvious two numbers */
		next = prev + curr;
		if (next > 4000000)
			break;
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
