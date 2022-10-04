#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * alloc_grid - Entry point
 * @width: rows
 * @height: columns
 *
 * Description: function that returns a pointer to a
 * 2 dimensional array of integers.
 *
 * Return: a pointer to a 2 dimensional array of integers or NULL
 */
int **alloc_grid(int width, int height)
{
	int **twoD;
	int i;
	int j;
	int k;
	int *ptr;

	if (width <= 0 || height <= 0)
		return (NULL);
	twoD = (int **)malloc(height * sizeof(int *));
	if (twoD == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		*(twoD + i) = (int *)malloc(width * sizeof(int));
		if (*(twoD + i) == NULL)
		{
			for (i = 0; i < height; i++)
			{
				ptr = twoD[i];
				free(ptr);
			}
			free(twoD);
			return (NULL);
		}
	}
	for (k = 0; k < height; k++)
	{
		for (j = 0; j < width; j++)
		{
			twoD[k][j] = 0;
		}
	}
	return (twoD);
}
