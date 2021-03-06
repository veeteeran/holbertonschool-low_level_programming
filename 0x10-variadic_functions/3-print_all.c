#include "variadic_functions.h"
void print_char(va_list);
void print_int(va_list);
void print_float(va_list);
void print_str(va_list);
void print_nil(va_list);
/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 *
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	fmt_t types[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_str},
		{NULL, NULL}
	};
	va_list vl;
	int i, j;
	char *separator = "";

	va_start(vl, format);
	i = 0;
	while (format && format[i])
	{
		j = 0;
		while (types[j].s)
		{
			if (*(types[j].s) == format[i])
			{
				printf("%s", separator);
				types[j].fptr(vl);
				separator = ", ";
			}
			j++;
		}
		i++;
	}
	va_end(vl);
	printf("\n");
}

/**
 * print_char - the char to print
 * @args: the char to print
 *
 * Return: nothing
 */
void print_char(va_list args)
{
	printf("%c", va_arg(args, int));
}
/**
 * print_int - prints an int
 * @args: the int to print
 *
 * Return: nothing
 */
void print_int(va_list args)
{
	printf("%d", va_arg(args, int));
}
/**
 * print_float - prints a float
 * @args: the float to print
 *
 * Return: nothing
 */
void print_float(va_list args)
{
	printf("%f", va_arg(args, double));
}
/**
 * print_str - prints a string
 * @args: the string to print
 *
 * Return: Nothing
 */
void print_str(va_list args)
{
	char *ptr;

	ptr = va_arg(args, char *);
	if (ptr == NULL)
		ptr = "(nil)";

	printf("%s", ptr);
}
