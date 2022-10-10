#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * print_dog - function that print
 * @d: pointer to struct dog
 *
 * Description: function that initialize a variable of type struct dog
 *
 * Return: return void
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		if (d->name)
			printf("Name: %s\n", d->name);
		else
			printf("Name: (nil)\n");
		printf("Age: %f\n", d->age);
		if (d->owner)
			printf("Owner: %s\n", d->owner);
		else
			printf("Owner: (nil)\n");
	}
	else
		return;
}
