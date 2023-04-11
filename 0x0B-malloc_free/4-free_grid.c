#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 *free_grid - frees the memory for alloc_grid function
 *@grid: gid function to be cleared
 *@height: height of the grid
 *Return: void
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}
