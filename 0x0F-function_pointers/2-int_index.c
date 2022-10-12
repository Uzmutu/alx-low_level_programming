#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
 * int_index - function
 * @array: given array of int
 * @size: size of the array
 * @cmp: pointer to a function to be used to compare values
 *
 * Description: function that searches for an integer.
 *
 * Return: returns the index of the first element for which
 * the cmp function does not return 0, return -1 if no match or
 * if size less or equal 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (!array || !cmp || size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
