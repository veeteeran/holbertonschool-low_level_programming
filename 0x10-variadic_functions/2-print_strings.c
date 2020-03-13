#include "variadic_functions.h"
/**
 * print_strings - prints strings, followed by a new line
 * @separator: string to be printed between the strings
 * @n: the number of strings passed to the function
 * @...: variable arguments
 *
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		if (va_arg(args, char *) == NULL)
			printf("nil");
		else
			printf("%s", va_arg(args, char *));	

		if (i == n - 1)
			printf("\n");
		else if (separator != NULL)
			printf("%s", separator);
	}
	va_end(args);
}
