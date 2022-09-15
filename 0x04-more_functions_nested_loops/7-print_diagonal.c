#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
 * print_diagonal - function that print some diagonal
 * @n: variable for the line
 *
 * Description: print n diagonal if n greater than 0
 *
 * Return: return diagonal
 */
void print_diagonal(int n)
{
	if (n <= 0)
		_putchar('\n');
	else
	{
		int i;

		for (i = 1; i <= n; i++)
			_putchar('\\');
		_putchar('\n');
	}
}
