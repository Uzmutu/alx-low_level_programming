#include <stdio.h>
#include "dog.h"
/**
 * init_dog - function that initialize
 * @d: pointer to struct dog
 * @name: pointer to the name param of the struct dog
 * @age: age of the dog
 * @owner: pointer to the owner param of the struct dog
 *
 * Description: function that initialize a variable of type struct dog
 *
 * Return: return void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
	else
		return;
}
