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
	int ndx, jndx, k = 0, len = 0;
	/* Return NULL if there are no arguments passed */
	if (ac == 0)
	{
		return (NULL);
	}
	/* Loop through each argument */
	for (ndx = 0; ndx < ac; ndx++)
	{	/* Return NULL if string is empty */
		if (av[ndx] == '\0')
		{
			return (NULL);
		}
		/* Get string length of each argument */
		for (jndx = 0; av[ndx][jndx]; jndx++)
			continue;
		len += jndx + 1;
	}
	/* Allocate memory plus one byte for newline at the end */
	ptr = (char *) malloc((len * sizeof(char)) + 1);
	/* Free memory and exit if allocation fails */
	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	/* Loop counter for each argument */
	for (ndx = 0; ndx < ac; ndx++)
	{	/* Control loop for each index in newly allocated
		 * array and each arg
		 */
		for (jndx = 0; av[ndx][jndx]; jndx++, k++)
			/* Assign each letter of each arg to each index in ptr*/
			ptr[k] = av[ndx][jndx];
		/* Add a newline followed by null byte after last character */
		if (ndx == (ac - 1))
		{	ptr[k] = '\n';
			ptr[k + 1] = '\0';

		}
		/* Add a newline upon exit of inner loop (the end of each arg) */
		else
			ptr[k] = '\n';
		/* k movess to next index in ptr */
		k++;
	}
	return (ptr);
}
