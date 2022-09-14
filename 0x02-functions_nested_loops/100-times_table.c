#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
 * print_times_table - print n time table
 * @n: tested variable
 *
 * Description: print all n times table starting to 0
 *
 * Return: return the table
 */
void print_times_table(int n)
{
	if (n > 0 && n < 15)
	{
		int i;

		for (i = 0; i <= n; n++)
		{
			int k;
			int v;

			for (k = 0; k <= 9; k++)
			{
				v = n * k;
				if (k < 9)
				{
					if (v <= 9)
					{
						_putchar((v % 10) + '0');
						_putchar(',');
						_putchar(' ');
					}
					else if (v > 9)
					{
						_putchar((v / 10) + '0');
						_putchar((v % 10) + '0');
						_putchar(',');
						_putchar(' ');
					}
				}
				if (k == 9)
				{
					if (v < 10)
						_putchar((v % 10) + '0');
					else
					{
						_putchar((v / 10) + '0');
						_putchar((v % 10) + '0');
					}
				}
			}
			_putchar('\n');
		}
	}
}
