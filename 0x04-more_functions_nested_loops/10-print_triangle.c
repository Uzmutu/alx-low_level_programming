#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
 * print_triangle - function that print # triangle
 * @size: variable for the triangle size
 *
 * Description: print triangle of size line if size greater than 0
 *
 * Return: return line
 */
void print_triangle(int size)
{
	int i;
	int j;
	int k;

	if (size <= 0)
		_putchar('\n');
	for (i = 1; i <= size; i++)
	{
		for (k = i; k < size; k++)
			_putchar(' ');
		for (j = 1; j <= i; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
