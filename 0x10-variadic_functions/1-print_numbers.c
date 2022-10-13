#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_numbers - function that print
 * @separator: string to be printed between numbers
 * @n: the number of arguments
 * @...: variable number of arguments
 *
 * Description: function that prints numbers, followed by a new line.
 *
 * Return: returns void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list j;

	va_start(j, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(j, int));
		if (i != (n - 1) && separator)
			printf("%s", separator);
	}
	printf("\n");
	va_end(j);
}
