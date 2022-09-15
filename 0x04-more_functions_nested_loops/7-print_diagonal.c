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
	if (n <= 0)
		_putchar('\n');
	else
	{
		int i;
		int counter;

		counter = 0;
		while (counter < n)
		{
			for (i = 0; i < counter; i++)
				_putchar(' ');
			_putchar(92);
			_putchar('\n');
			counter++;
		}
	}
}
