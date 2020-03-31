#include "holberton.h"

/**
 * read_textfile - read text file, prints it POSIX standard output
 *
 * Return: num of letters read and printed, 0 on failure
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, rd, wr;
	char *buf;

	if (filename == NULL)
		return (0);

	buf = malloc(sizeof(char) * (letters));
	if (buf == NULL)
		return ('\0');

	fd = open(filename, O_RDONLY);
	rd = read(fd, buf, letters);
	wr = write(STDOUT_FILENO, buf, rd);
	if (fd == -1 || rd == -1 || wr == -1)
	{
		free(buf);
		return (0);
	}

	close(fd);
	free(buf);
	return(wr);
}
