#include "main.h"
#include <stdlib.h>
/**
 * free_grid - free 2d grid
 * @grid: array of int to be freed from slavery
 * @height: height of grid
 *
 * Return: void
 */
void free_grid(int **grid, int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height >= 0; height--)
		{
			free(grid[height]);
		}
		free(grid);
	}
}
