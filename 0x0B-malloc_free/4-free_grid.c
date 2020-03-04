#include <stdlib.h>
#include "holberton.h"
/**
 * free_grid - frees a 2 dimensional grid previously created
 * @grid: the grid to free
 * @height: height of the grid
 *
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
	int indx;

	for (indx = 0; indx < height; indx++)
	{
		free(grid[indx]);
	}
	free(grid);
}
