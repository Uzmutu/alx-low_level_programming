#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * malloc_checked - Entry Point
 * @b: input amount
 *
 * Description: function that allocates memory using malloc.
 *
 * Return: return pointer to new allocate memory
 */
void *malloc_checked(unsigned int b)
{
	void *i;

	i = malloc(b);

	if (i != NULL)
		return (i);
	exit(98);
}
