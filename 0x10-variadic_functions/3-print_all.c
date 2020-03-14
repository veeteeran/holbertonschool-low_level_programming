#include "variadic_functions.h"
int _strlen(const char * const s);
void print_char(va_list);
void print_int(va_list);
void print_float(va_list);
void print_str(va_list);
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
	int i, j, len;
	char *str;

	len = _strlen(format);
	printf("%d\n", len);
	va_start(vl, format);
	i = 0;
	printf("Outside outer loop\n");
	while (i < len)
	{
		printf("entering loop\n");
		str = va_arg(vl, char *);
		printf("%s\n", str);
		if (str == NULL)
			printf("(nil)");
		j = 0;
		while (types[j].c != NULL)
		{
			if (strcmp(str, types[j].c) == 0)
				types[j].fptr(vl);
			j++;
		}
		i++;
	}
	va_end(vl);
}

/**
 * @s: the string to check
 *
 * Return: the length of a string as an int
 */
int _strlen(const char * const s)
{
	int counter;

	if (s == NULL)
		counter = 0;
	else
	{
		for (counter = 0; s[counter] != '\0'; counter++)
		{
			continue;
		}
	}
	return (counter);
}
/**
 * print_char - the char to print
 * @s: the char to print
 *
 * Return: nothing
 */
void print_char(va_list args)
{
	printf("%c", va_arg(args, int));
}
/**
 * print_int - prints an int
 * @s: the int to print
 *
 * Return: nothing
 */
void print_int(va_list args)
{
	printf("%d", va_arg(args, int));
}
/**
 * print_float - prints a float
 * @s: the float to print
 *
 * Return: nothing
 */
void print_float(va_list args)
{
	printf("%f", va_arg(args, double));
}
/**
 * print_str - prints a string
 * @s: the string to print
 *
 * Return: Nothing
 */
void print_str(va_list args)
{
	printf("%s", va_arg(args, char *));
}
