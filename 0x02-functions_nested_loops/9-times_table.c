#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
 * times_table - print 9 time table
 *
 * Description: print all 9 times table starting to 0
 *
 * Return: return the table
 */
void times_table(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		int k;
		int v;

		for (k = 0; k <= 9; k++)
		{
			v = n * k;
			if (k < 9)
			{
				if (v < 10)
					_putchar((v % 10) + '0');
				else
				{
					_putchar((v / 10) + '0');
					_putchar((v % 10) + '0');
				}
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
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
