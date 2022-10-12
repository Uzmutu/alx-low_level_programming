#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
 * print_name - function that print
 * @name: name to print
 * @f: pointer to a function that print
 *
 * Description: function that prints a name.
 *
 * Return: returns void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
