#include "holberton.h"
#include <stdlib.h>
int _strlen(char *s);
/**
 * argstostr - concatenates all the arguments of your program
 * @ac: argument count
 * @av: argument vecotor
 *
 * Return: pointer to the string
 */
char *argstostr(int ac, char **av)
{
	char *ptr;
	int ndx, jndx, len;

	
	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	len = ac;
	for (ndx = 0; ndx < ac; ndx++)
	{
		len += _strlen(av[ndx]);
	}

	ptr = (char *) malloc(len * sizeof(char));
	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	
	for (ndx = 0; ndx < ac; ndx++)
	{
		for (jndx = 0; jndx < av[ndx]; jndx++)
		{
			ptr[ndx] = av[ndx][jndx];
			if (ndx == ac -1)
			{
				ptr[ndx] = '\0';
				ptr[ndx + 1] = '\n';
			}
			else
			{
				ptr[ndx] = '\n';
			}
		}
	}
	return (ptr);
}

/**
 * _strlen - returns the length of a string
 * @s: the string to check
 *
 * Return: the length of a string as an int
 */
int _strlen(char *s)
{
	int counter;

	for (counter = 0; s[counter] != '\0'; counter++)
	{
		continue;
	}
	return (counter);
}
