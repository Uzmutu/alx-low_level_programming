#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
 * space - put some space
 *
 * Description: use _putchar to put some some space
 *
 * Return: return space
 */
void space(void)
{
	_putchar(',');
	_putchar(' ');
	_putchar(' ');
}
/**
 * print_times_table - print n time table
 * @n: argument for calculation
 *
 * Description: print all n of given number times table starting to 0
 * if n greater than 0 and n less than or equal to 15
 *
 * Return: return the table
 */
void print_times_table(int n)
{
	int a;
	int k;
	int v;

	if (n >= 0 && n <= 15)
	{
		for (a = 0; a <= n; a++)
		{
			for (k = 0; k <= n; k++)
			{
				v = a * k;
				if (v <= 9)
				{
					if (k != 0)
					{
						space();
						_putchar(' ');
					}
					_putchar((v % 10) + '0');
				}
				else if (v <= 99)
				{
					space();
					_putchar((v / 10) + '0');
					_putchar((v % 10) + '0');
				}
				else
				{
					_putchar(',');
					_putchar(' ');
					_putchar((v / 100) + '0');
					_putchar(((v / 10) - 10) + '0');
					_putchar((v % 10) + '0');
				}
			}
		_putchar('\n');
		}
	}
}
