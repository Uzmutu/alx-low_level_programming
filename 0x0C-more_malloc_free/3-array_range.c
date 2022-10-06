#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * array_range - function that creates an array of integers
 * @min: minimum of the range
 * @max: maximum of the range
 *
 * Description: created an array that contain all the values from
 * min (included) to max (included), ordered from min to max
 *
 * Return: return pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *ptr;
	int range;

	if (min > max)
		return (NULL);
	range = max - min;

	ptr = malloc(sizeof(int) * (range + 1));
	if (ptr == NULL)
		return (NULL);
	while (max > min)
	{
		ptr[b] = max;
		range--;
		max--;
	}
	ptr[range] = min;
	return (ptr);
}
