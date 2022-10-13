#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - function that sum
 * @n: the number of arguments
 * @...: variable number of arguments
 *
 * Description: function that returns the sum of all its parameters
 *
 * Return: returns the sum of all param
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	unsigned int sum;
	va_list j;

	va_start(j, n);
	sum = 0;
	i = 0;
	while (i < n)
	{
		sum += va_arg(j, int);
		i++;
	}
	va_end(j);
	return (sum);
}
