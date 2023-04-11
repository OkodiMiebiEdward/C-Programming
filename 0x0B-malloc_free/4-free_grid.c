#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - releases a two dimensional array
 * @grid: parameter to receive argument of 2d array
 * @height: the height dimension of grid
 * Return: void or empty
 *
 */
void free_grid(int **grid, int height)
{
	int w = 0;

	for (; w < height; w++)
	{
		free(grid[w]);
	}
	free(grid);
}

