#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "3-calc.h"
/**
 * main - Entry point
 * @argc: the number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char **argv)
{
	int a, b;
	int (*fptr)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	fptr = get_op_func(argv[2]);
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	if (fptr == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	else if ((!strcmp(argv[2],"/") || !strcmp(argv[2],"%")) && b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", fptr(a, b));
	return (0);
}
