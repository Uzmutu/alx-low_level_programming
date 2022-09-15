#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
 * print_line - function that print some line
 * @n: variable for the line
 *
 * Description: print n line if n greater than 0
 *
 * Return: return line
 */
void print_line(int n)
{
	if (n <= 0)
		_putchar('\n');
	else
	{
		int i;

		for (i = 1; i <= n; i++)
			_putchar('_');
		_putchar('\n');
	}
}
