#include <stdio.h>
#include <string.h>
/**
 * main - Entry point
 * @argc: number of arguments
 * @argv: array of arguments passed
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else if (atoi(argv[1]) < 0)
	{
		printf("Error\n");
		return (2);
	}
	return (0);
}
