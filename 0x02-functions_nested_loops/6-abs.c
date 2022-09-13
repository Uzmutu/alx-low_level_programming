#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
 * _abs - give the absolute
 * @int: variable tested
 *
 * Description: compute the absolute value of an integer
 *
 * Return: return the absolute value;
 */
int _abs(int value)
{
	if (value < 0)
		return (value *= -1);
	else
		return (value);
}
