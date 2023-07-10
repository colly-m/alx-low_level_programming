#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_grid - function to free a 2D grid creadted by alloc_grid function
 * @grid: pointer to int type grid
 * @height: integer
 * Return: clean memory
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || grid == 0)
	{
		return;
	}
	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
