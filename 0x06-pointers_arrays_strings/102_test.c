#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int _atoi(char *s);
int main(void)
{
	char *n = "123456789";
        char *m = "903479036";
	int num1, num2;
	
        num1 = _atoi(n);
	num2 = _atoi(m);
	printf("num1: %d num2: %d\n", num1, num2);
	return (0);
}
