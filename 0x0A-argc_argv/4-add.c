#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
/**
 * main - adds positive numbers
 * @argc: the number of args passed to main
 * @argv: the string representaion of args
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int index, jndx, len, digit, sum = 0;

	if (argc == 1)
		printf("0\n");
	else
	{
		for (index = 1; index < argc; index++)
		{
			len = strlen(argv[index]);
			for (jndx = 0; jndx < len; jndx++)
			{
				digit = argv[index][jndx];
				if (!isdigit(digit))
				{
					printf("Error\n");
					return (1);
				}
			}
			if (atoi(argv[index]) < 0)
			{
				continue;
			}
			else
			{
				sum += atoi(argv[index]);
			}
		}
		printf("%d\n", sum);
	}
	return (0);
}
