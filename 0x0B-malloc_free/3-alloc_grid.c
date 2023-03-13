#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - creates a two dim array of integers
 * @width: number of column
 * @height: number of rows
 *
 * Return: pointer to a new matrix. Otherwise NULL
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **grid;

	if (width < 1 || height < 1)
		return (NULL);

	grid = malloc(width * sizeof(int *));
	if (grid == NULL)
		return (NULL);

	for (i = 0; i < width; i++)
	{
		grid[i] = malloc(height * sizeof(int));
		if (grid[i] == NULL)
			return (NULL);
	}

	for (i = 0; i < width; i++)
	{
		for (j = 0; j < height; j++)
			grid[i][j] = 0;
	}

	return (grid);
}
