#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
 * print_diagonal - function that print diagonal line
 * @n: variable for the triangle size
 *
 * Description: print triangle of n diagonal line if size greater than 0
 *
 * Return: return diagonal line
 */
void print_diagonal(int n)
{
	int i;
	int k;

	if (n <= 0)
		_putchar('\n');
	for (i = 1; i <= n; i++)
	{
		for (k = 1; k <= i; k++)
		{
			_putchar(' ');
		}
		_putchar(92);
		_putchar('\n');
	}
}
