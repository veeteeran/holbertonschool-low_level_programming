#include "holberton.h"
#include <stdlib.h>
/**
 * free_grid - frees a 2D grid previously created
 * @grid: the grid to free
 * @height: height of the grid
 *
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
	int ndx;

	for (ndx = 0; ndx < height; ndx++)
	{
		free(grid[ndx]);
	}
	free(grid);
}
