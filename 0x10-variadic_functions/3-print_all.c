#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_all - function that print
 * @format: list of types of arguments to passed to the function:
 * c for char, i for integer, f for float, s for char*
 * @...: variable number of arg
 *
 * Description: function that prints anything
 *
 * Return: return void
 */
void print_all(const char * const format, ...)
{
	int i;
	int k;
	char *ptr;
	char *separator = ", ";
	va_list j;

	va_start(j, format);
	while (format && format[i])
		i++;
	while (format && format[k])
	{
		if (k == (i - 1))
			separator = "";
		switch (format[k])
		{
			case 'c':
				printf("%c%s", va_arg(j, int), separator);
				break;
			case 'i':
				printf("%d%s", va_arg(j, int), separator);
				break;
			case 'f':
				printf("%f%s", va_arg(j, double), separator);
				break;
			case 's':
				ptr = va_arg(j, char *);
				if (!ptr)
					printf("(nil)%s", separator);
				printf("%s%s", ptr, separator);
				break;
		}
		k++;
	}
	printf("\n");
	va_end(j);
}
