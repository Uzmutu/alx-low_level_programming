#include <stdio.h>
#include "main.h"
/**
 * _pow_recursion - function that calculate power
 * @x: base
 * @y: the power to elevate the base x
 *
 * Description: function that return the power of x by y
 *
 * Return: returns -1 if y < 0, 1 if y == 0 and the power of x by y if y > 0
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
