#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - freeing matrix
 * @grid: buffer being freed
 * @height: freed height
 *
 * Description: function that frees a 2 dimensional grid
 * previously created by your alloc_grid function.
 *
 * Return: freed grid
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
