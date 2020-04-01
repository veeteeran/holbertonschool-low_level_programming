#include "holberton.h"
void read_err(char *arg);
void write_err(char *arg);
void close_err(int arg);
/**
 * main - the entry point
 * @argc: number of arguments
 * @argv: the arguments passed
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int op_to, op_from;
	ssize_t rd, wr;
	char argc_err[] = "Usage: cp file_from file_to";
	char *buf;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", argc_err);
		exit(97);
	}

	buf = malloc(sizeof(char) * 1024);
	if (buf == NULL)
		/* read_err? */
		return ('\0');

	op_from = open(argv[1], O_RDONLY);
	if (op_from == -1)
		read_err(argv[1]);

	op_to = open(argv[2], O_CREAT | O_RDWR | O_TRUNC, 0664);

	if (op_to == -1)
		write_err(argv[2]);

	rd = read(op_from, buf, 1024);
	if (rd == -1)
		read_err(argv[1]);

	wr = write(op_to, buf, rd);
	if (wr == -1)
		write_err(argv[2]);

	while (rd == 1024)
	{
		rd = read(op_from, buf, 1024);
		if (rd == -1)
			read_err(argv[1]);
		wr = write(op_to, buf, rd);
		if (wr == -1)
			write_err(argv[2]);
	}
	free(buf);

	if (close(op_to) == -1)
		close_err(op_to);

	if (close(op_from) == -1)
		close_err(op_from);

	return (0);
}

/**
 * read_err - prints read error message
 * @arg: arg of read error
 *
 * Return: void
 */
void read_err(char *arg)
{
	char argv1_err[] = "Error: Can't read from file";

	dprintf(STDERR_FILENO, "%s %s\n", argv1_err, arg);
	exit(98);
}

/**
 * write_err - prints write error message
 * @arg: arg of write error
 *
 * Return: void
 */
void write_err(char *arg)
{
	char wr_err[] = "Error: Can't write to";

	dprintf(STDERR_FILENO, "%s %s\n", wr_err, arg);
	exit(99);
}

/**
 * close_err - prints close error message
 * @arg: arg of close error
 *
 * Return: void
 */
void close_err(int arg)
{
	char cl_err[] = "Error: Can't close fd";

	dprintf(STDERR_FILENO, "%s %d\n", cl_err, arg);
	exit(100);
}
