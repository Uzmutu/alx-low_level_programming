#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_strings - function that print
 * @separator: string to be printed between numbers
 * @n: the number of arguments
 * @...: variable number of arguments
 *
 * Description: function that prints numbers, followed by a new line.
 *
 * Return: print nothing if separator == NULL,print nil if one of the
 * string is NULL, else print string
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list j;
	char *p;

	va_start(j, n);
	for (i = 0; i < n; i++)
	{
		p = va_arg(j, char *);
		if (!p)
			printf("(nil)");
		else
			printf("%s", p);
		if (i != (n - 1) && separator)
			printf("%s", separator);
	}
	printf("\n");
	va_end(j);
}
