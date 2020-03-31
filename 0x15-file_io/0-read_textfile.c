#include "holberton.h"

/**
 * read_textfile - read text file, prints it POSIX standard output
 *
 * Return: num of letters read and printed, 0 on failure
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, num_bytes;
	char *buf;

	if (filename == NULL)
		return (0);

	buf = malloc(sizeof(char) * (letters + 1));
	if (buf == NULL)
		return ('\0');

	fd = open(filename, O_RDONLY, 400);
	if (fd == -1)
		return (0);

	read(fd, buf, letters);
	buf[letters + 1] = '\0';
	close(fd);

	num_bytes = write(STDOUT_FILENO, buf, letters + 1);
	return(num_bytes);
}
