#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * struct format - print formats
 * @s: format char
 * @fptr: function to print
 */
typedef struct format
{
	char *s;
	void (*fptr)(va_list);
} fmt_t;

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif /* VARIADIC_FUNCTIONS_H */
