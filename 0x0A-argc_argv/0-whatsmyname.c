#include <stdio.h>
/**
 * main - prints name of program
 * @argc: the number of arguments to main
 * @argv: the arguments to main
 *
 * Return: 0 on success, 1 if no name passed
 */
int main(int argc, char *argv[])
{
	if (argc < 1)
	{
		return (1);
	}
	else
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
