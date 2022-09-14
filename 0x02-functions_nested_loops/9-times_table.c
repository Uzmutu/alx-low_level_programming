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
	int k;
	int v;

	for (n = 0; n <= 9; n++)
	{
		for (k = 0; k <= 9; k++)
		{
			v = n * k;
			if (v <= 9)
			{
				if (k != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
				_putchar((v % 10) + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar((v / 10) + '0');
				_putchar((v % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
