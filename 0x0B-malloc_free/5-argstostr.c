#include "holberton.h"
#include <stdlib.h>
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
	int ndx, jndx, k, len = 0;

	
	if (ac == 0)
	{
		return (NULL);
	}

	for (ndx = 0; ndx < ac; ndx++)
	{
		if (av[ndx] == 0)
		{
			return (NULL);
		}
		for (jndx = 0; av[ndx][jndx]; jndx++)
			continue;
		len += jndx + 1;
	}

	ptr = (char *) malloc(len * sizeof(char) + 1);
	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	
	for (ndx = 0; ndx < ac; ndx++)
	{
		for (jndx = 0; av[ndx][jndx]; jndx++, k++)
		{
			ptr[k] = av[ndx][jndx];
		}
		if (ndx == (ac - 1))
		{	ptr[k] = '\n';
			ptr[k + 1] = '\0';

		}
		else
		{
			ptr[k] = '\n';
		}
		k++;
	}
	return (ptr);
}
