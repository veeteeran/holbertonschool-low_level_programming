#include "holberton.h"
int _strlen(char *str);

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of file
 * @text_content: NULL terminated string to add
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int op, wr, len;

	if (filename == NULL)
		return (-1);

	op = open(filename, O_RDWR | O_APPEND, 0600);
	if (text_content == NULL && op)
		return (1);
	else if (op == -1)
		return (-1);

	len = _strlen(text_content);
	wr = write(op, text_content, len);
	if (wr == -1)
		return (-1);

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
