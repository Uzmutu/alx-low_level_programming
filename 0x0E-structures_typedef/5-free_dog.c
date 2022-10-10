#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - function that free
 * @d: pointer to dog_t
 *
 * Description: function that frees dogs.
 *
 * Return: return void
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
