#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * alloc_grid - funtion that returns a pointer to a
 * 2 dimensional array of integers
 * @width: width
 * @height: height
 * Return: a pointer
 */
int **alloc_grid(int width, int height)
{
	int **arr_grid, i, j;

	if (width < 1 || height < 1)
		return (NULL);

	arr_grid = malloc(sizeof(int) * height);
	if (arr_grid == NULL)
	{
		free(arr_grid);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		arr_grid[i] = malloc(sizeof(int) * width);

		if (arr_grid[i] == NULL)
		{
			for (j = 0; j < width; j++)
				free(arr_grid[j]);
			free(arr_grid);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			arr_grid[i][j] = 0;
	}
	return (arr_grid);
}
