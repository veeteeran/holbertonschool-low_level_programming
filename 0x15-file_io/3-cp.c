#include "holberton.h"
int _strlen(char *str);
#define RWRWR (S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH)
/**
 * main - the entry point
 * @argc: number of arguments
 * @argv: the arguments passed
 *
 * Return: 1 on success, -1 on failure
 */
int main(int argc, char *argv[])
{
	int op_to, op_from, rd, wr, cl_to, cl_from, len;
	char argc_err[] = "Usage: cp file_from file_to";
	char argv1_err[] = "Error: Can't read from file";
	char wr_err[] = "Error: Can't write to";
	char cl_err[] = "Error: Can't close fd";
	char *buf;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", argc_err);
		exit(97);
	}
	/* 664 permission, leave unchaged if already exists*/
	op_to = open(argv[2], O_CREAT | O_RDWR | O_TRUNC, 0664);
	if (op_to == -1)
		return (-1);

	len = _strlen(argv[1]);
	buf = malloc(sizeof(char) * len);
	if (buf == NULL)
		return ('\0');
	op_from = open(argv[1], O_RDONLY);
	rd = read(op_from, buf, 1024);
	wr = write(op_to, buf, rd);
	if (op_from == -1 || rd == -1)
	{
		dprintf(STDERR_FILENO, "%s %s\n", argv1_err, argv[1]);
		exit(98);
	}
	if (op_to == -1 || wr == -1)
	{
		dprintf(STDERR_FILENO, "%s %s\n", wr_err, argv[2]);
		exit(99);
	}

	cl_to = close(op_to);
	cl_from = close(op_from);
	if (cl_to == -1 || cl_from == -1)
	{
		dprintf(STDERR_FILENO, "%s %d\n", cl_err, op_to);
		exit(100);
	}
	if (cl_from == -1)
	{
		dprintf(STDERR_FILENO, "%s %d\n", cl_err, op_from);
		exit(100);
	}

	free(buf);
	return (1);
}

/**
 * _strlen - find length of given string
 * @str: the string whose length to find
 *
 * Return: length of a string
 */
int _strlen(char *str)
{
	int count;

	for (count = 0; *str++; count++)
		;
	return (count);
}
