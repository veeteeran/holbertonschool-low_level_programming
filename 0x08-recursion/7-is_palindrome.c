#include "holberton.h"
int _strlen_recursion(char *s);
int move_char(char *s, int head, int end);
/**
 * is_palindrome - check if string is palindrome
 * @s: the string to check
 *
 * Return: 1 if is palindrome, 0 if not
 */
int is_palindrome(char *s)
{
	int len = (_strlen_recursion(s)) - 1;
	int result;

	result = move_char(s, 0, len);
	return (result);
}

/**
 * _strlen_recursion - return the length of a string
 * @s: the tring whose length to return
 *
 * Return: the length of the string as an int
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
		return (1 + _strlen_recursion(s + 1));
	else
		return (0);
}

/**
 * move_char - move through the string
 * @s: the string to compare
 * @head: head of the string
 * @tail: tail of the string
 *
 * Return: 1 if palindrome, 0 otherwise
 */
int move_char(char *s, int head, int tail)
{
	if (s[head] == s[tail])
		return (move_char(s, head + 1, tail - 1));
	else if (head > tail)
		return (1);
	return (0);
}
