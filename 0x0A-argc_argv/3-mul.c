#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints multiplication of args
 * @argc: the number of args passed to main
 * @argv: the string representaion of args
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int index, result = 1;

	if (argc != 2)
		printf("Error\n");
		return (1);
	else
	{
		for (index = 1; index < argc; index++)
		{
			result *= atoi(argv[index]);
		}
		printf("%d\n", result);
	}
	return (0);
}
