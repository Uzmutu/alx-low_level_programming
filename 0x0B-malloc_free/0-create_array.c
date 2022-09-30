#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * create_array - Entry point
 * @size: size of the array
 * @c: character to fill the array
 *
 * Description: function that creates an array of chars,
 * and initializes it with a specific char.
 *
 * Return: returns the newly create array or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *ptr = NULL;
	unsigned int i;

	if (size == 0)
		return (NULL);
	if (size != 0)
	{
		ptr = (char *)malloc(size * sizeof(char));
		if (ptr != NULL)
		{
			for (i = 0; i < size; i++)
				ptr[i] = c;
		}
	}
	return (ptr);
}
