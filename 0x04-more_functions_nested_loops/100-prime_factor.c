#include <stdio.h>
#include <math.h>
/**
 * main - Entry point
 *
 * Return: 0 on succes
 */
int main(void)
{
	/* need double to store large number */
	double big_num, sq_rt, factor;

	big_num = 612852475143.0;
	/* largest factor will be less than sq_rt of big_num */
	sq_rt = sqrt(big_num);
	/* iterate through odd numbers, other than 2 no primes are even */
	for (factor = 3; factor < sq_rt; factor += 2)
	{
		/* use fmod func, modulus operator does not work with floats */
		while (fmod(big_num, factor) == 0)
		{
			printf("%.f ", factor);
			/* divide by factor to reduce big_num */
			big_num /= factor;
			/* when this is true, largest prime found, break */
			if (big_num / factor == 1)
			{
				;
			}
		}
	}
	printf("%.f\n", big_num);
	return (0);
}
