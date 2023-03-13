#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees up a 2 dim grid
 * @grid: grid memory area to be freed
 * @height: number of rows
 */
void free_grid(int **grid, int height)
{
	int i;

	free(grid);
	for (i = 0; i < height; i++)
		free(grid[i]);
}
