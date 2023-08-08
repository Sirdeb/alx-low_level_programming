#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - it frees 2d array
 * @grid: the 2d grid
 * @h: the height dimension of grid
 * Description: frees memory of grid
 * Return: nothing
 *
 */
void free_grid(int **grid, int h)
{
	int b;

	for (b = 0; b < height; b++)
	{
		free(grid[b]);
	}
	free(grid);
}
