#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * _calloc - function that print
 * @nmemb: array number
 * @size: size
 *
 * Description: function that allocates memory for an array, using malloc
 *
 * Return: returns pointer nmemb or size is 0,
 * or malloc fail returns NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i;
	unsigned int ptr_size;

	if (!nmemb || !size)
		return (NULL);
	ptr_size = nmemb * size;
	ptr = malloc(ptr_size);
	if (!ptr)
		return (NULL);
	for (i = 0; i < ptr_size; i++)
		ptr[i] = 0;
	return (ptr);
}
