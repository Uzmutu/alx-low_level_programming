#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
 * print_sign - function checking sign
 * @n: variable tested
 *
 * Description: check the signe of the given argument n
 *
 * Return: return '-1' if less than 0, '+1' if greater than 0 and '0' if 0
 */
int print_sign(int n)
{

	if (n < 0)
	{
		return (_putchar('-'));
		return (-1);
	}
	else if (n > 0)
	{
		return (_putchar('+'));
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
	}

	return (0);
}
