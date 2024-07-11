#include "main.h"

/**
*free_grid - that free a 2 dimensional grid
*@grid: pointer to array of integers
*@height: the height of 2D table
*
*Return: pointers
*/

void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
	{
		return;
	}

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
