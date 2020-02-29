#include <stdio.h>
/**
 * main - prints all arugments it receives on its own line
 * @argc: the number of args passed to main
 * @argv: the string representaion of args
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int index;

	for (index = 0; index < argc; index++)
	{
		printf("%s\n", argv[index]);
	}
	return (0);
}
