#include <stdio.h>
#include <stdlib.h>
/**
 * main - adds positive numbers
 * @argc: the number of args passed to main
 * @argv: the string representaion of args
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int index, sum = 0;
	if (argc == 1)
		printf("0\n");
	else
	{
		for (index = 1; index < argc; index++)
		{
			if (*argv[index] < '0' || *argv[index] > '9')
			{
				printf("Error\n");
				return (1);
			}
			else if (atoi(argv[index]) < 0)
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
