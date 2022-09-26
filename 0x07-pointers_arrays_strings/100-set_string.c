#include <stdio.h>
#include "main.h"
/**
 * set_string - function that sets value
 * @s: pointer to char
 * @to: string to point to s
 *
 * Description: function that sets the value of a pointer to a char.
 *
 * Return: return void
 */
void set_string(char **s, char *to)
{
	*s = to;
}
