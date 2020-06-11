#include "holberton.h"
int find_prime(int i, int num);
/**
 * is_prime_number - checks if number is prime
 * @n: the number to check
 *
 * Return: 1 if prime, 0 if not prime
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	else if (find_prime(3, n) == 0)
		return (0);

	return (1);
}

/**
 * find_prime - recursively go through ints to see if prime
 * @i: int to start at finding prime
 * @num: the max value to go up to of searching for prime
 *
 * Return: 1 if prime, 0 if not prime
 */
int find_prime(int i, int num)
{
	if (num == i)
		return (1);
	else if (num % i == 0)
		return (0);
	else if (num > i)
		return (find_prime(i + 1, num));
	return (0);
}
