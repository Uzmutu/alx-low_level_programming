#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * _strlen_recursion - function that count
 * @s: string to test
 *
 * Description: function that count the length of string s recursively
 *
 * Return: return the length in int
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
		return (_strlen_recursion(s + 1) + 1);
	else
		return (0);
}
/**
 * new_dog - function that create
 * @name: name of the dog
 * @age: age of the dog
 * @owner: name of the owner
 *
 * Description: function that create a new dog
 *
 * Return: return new dog created
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int n;
	int o;
	int i;
	int j;
	dog_t *n_dog;

	n_dog = malloc(sizeof(dog_t));
	if (!n_dog)
		return (NULL);
	n = _strlen_recursion(name);
	o = _strlen_recursion(owner);
	n_dog->name = malloc(sizeof(char) * (n + 1));
	n_dog->owner = malloc(sizeof(char) * (o + 1));
	if (!n_dog->name || !n_dog->owner)
	{
		free(n_dog);
		return (NULL);
	}
	for (i = 0; i <= n; i++)
		n_dog->name[i] = name[i];
	n_dog->age = age;
	for (j = 0; j <= o; j++)
		n_dog->owner[j] = owner[j];
	return (n_dog);
}
