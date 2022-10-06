#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * _realloc - reallocates a memory block
 * @ptr: pointer to reallocate memory
 * @old_size: size in bytes of allocated memory
 * @new_size: newsize of memory block in bytes
 *
 * Description: function that reallocates a memory block using malloc and free
 *
 * Return: void pointer to new allocation of memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *str;
	unsigned int i;

	if (!ptr)
	{
		str = malloc(new_size);
		return (str);
	}
	if (!new_size)
	{
		free(ptr);
		return (NULL);
	}
	if (old_size == new_size)
		return (ptr);
	str = malloc(new_size);
	if (!str)
		return (NULL);
	for (i = 0; i < old_size && i < new_size; i++)
		str[i] = ((char *)ptr)[i];
	free(ptr);
	return (str);
}
