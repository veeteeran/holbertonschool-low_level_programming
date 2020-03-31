#include "holberton.h"

int _strlen(char *str);
/**
 * create_file - function that creates a file
 * @filename: name of file to create
 * @text_content: content to enter into file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int op, wr, len;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	op = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (op == -1)
		return (-1);

	len = _strlen(text_content);
	wr = write(op, text_content, len);
	if (wr == -1)
		return (-1);

	close(op);
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
