#include "holberton.h"
unsigned long int _pow_recursion(unsigned long int x, int y);
/**
 * print_binary - prints the binary representation of a number
 * @n: number to represent as binary
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n>>1);

	_putchar((n & 1) + '0');
}
