#include <stdio.h>
/**
 * main - Entry point prints number of args passed to it
 * @argc: the number of args passed to main
 * @argv: the string representaion of args
 *
 * Return: 0 on success
 */
int main(int argc, __attribute__((unused)) char *argv[])
{
	int count = 0;
	int index;

	if (argc < 2)
	{
		printf("%d\n", count);
	}
	else
	{
		for (index = 1; index < argc; index++)
		{
			count++;
		}
		printf("%d\n", count);
	}
	return (0);
}
