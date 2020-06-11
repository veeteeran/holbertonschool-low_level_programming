#include <stdlib.h>
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
	/* Check for valid input */
	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	/* Allocate memory for double pointer (array of arrays) of size pointer */
	ptr = (int **) malloc(height * sizeof(int *));
	/* If allocation fails, exit function */
	if (ptr == '\0')
	{
		free(ptr);
		return (NULL);
	}
	/* Loop to allocate memory for each pointer (array) */
	for (indx = 0; indx < height; indx++)
	{	/* Allocate memory for each array */
		ptr[indx] = (int *) malloc(width * sizeof(int));
		if (ptr[indx] == '\0')
		{	/* Dynamically free each index of array if any are null */
			for (; indx >= 0; indx--)
			{
				free(ptr[indx]);
			}
			/* Free each double pointer */
			free(ptr);
			return (NULL);
		}
	}
	/* Loop to fill grid with zeros */
	for (indx = 0; indx < height; indx++)
	{
		for (jndx = 0; jndx < width; jndx++)
		{
			ptr[indx][jndx] = 0;
		}
	}
	return (ptr);
}
