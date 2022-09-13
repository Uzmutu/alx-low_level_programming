#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
 * print_sign - function checking sign
 * @n: variable tested
 *
 * Description: check the signe of the given argument n
 *
 * Return: return '1' if true an '0' if false
 */
int print_sign(int n)
{
	if (n < 0)
	{
		return (_putchar('-'));
		return (-1);
	}
	else if (n == 0)
	{
		return (_putchar('0'));
		return (0);
	}
	else
	{
		return (_putchar('+'));
		return (1);
	}
}
