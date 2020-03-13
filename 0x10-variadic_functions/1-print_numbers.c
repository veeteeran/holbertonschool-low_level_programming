#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: string to be printer between numbers
 * @n: number of args
 *
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));

		if (i == n - 1)
			printf("\n");
		else if (separator != NULL)
			printf("%s", separator);
	}
	va_end(args);
}
