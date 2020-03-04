#include "stdlib.h"
#include <stdio.h>
/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: width of the array
 * @height: height of the array
 *
 * Return: pointer to the 2-D array
 */
int **alloc_grid(int width, int height)
{
	int **ptr;
	int indx, jndx;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	ptr = (int **) malloc(width * sizeof(int *));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (indx = 0; indx < width; indx++)
	{
		ptr[indx] = (int *) malloc(height * sizeof(int));
		if (ptr[indx] == NULL)
		{
			return (NULL);
		}
	}
	for (indx = 0; indx < width; indx++)
	{
		for (jndx = 0; jndx < height; jndx++)
		{
			ptr[indx][jndx] = 0;
		}
	}
	return (ptr);
}
