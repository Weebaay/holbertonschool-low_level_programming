#include "main.h"
#include <stdlib.h>

/**
* **alloc_grid - that return a pointer to a 2 dimensional array of integers
*@width: the number to element we want allocate
*@height: the number of rows this table must have
*
*Return: pointers of array
*/

int **alloc_grid(int width, int height)
{
	int **grid;
	int i, l;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	grid = (int **)malloc(height * sizeof(int *));
	if (grid == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		grid[i] = (int *)malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			for (l = 0; l < i; l++)
			{
				free(grid[l]);
			}
			free(grid);
			return (NULL);
		}
		for (l = 0; l < width; l++)
		{
			grid[i][l] = 0;
		}
	}
	return (grid);
}
