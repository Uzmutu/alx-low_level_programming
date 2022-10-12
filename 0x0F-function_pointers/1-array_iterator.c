#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
 * array_iterator - function that executes
 * @array: an array
 * @size: size of the array
 * @action: pointer to the function
 *
 * Description: function that executes a function given as
 * a parameter on each element of an array.
 *
 * Return: returns void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (name && action)
	{
		while (size < 0)
		{
			action(*array);
			array++;
			size--;
		}
	}
}
