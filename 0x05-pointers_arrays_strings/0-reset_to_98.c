#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
 * reset_to_98 - function that reset
 * @n: pointer of the value that be reset
 *
 * Description: function who reset any given value at 98
 *
 * Return: return 98
 */
void reset_to_98(int *n)
{
	return (*n = 98);
}
