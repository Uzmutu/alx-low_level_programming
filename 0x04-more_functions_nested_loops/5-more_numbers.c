#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
 * more_numbers - print from 0 to 14
 *
 * Description: print number from 0 to 14, ten times,
 * followed by new line with only  3x_putchar()
 *
 * Return: void
 */
void more_numbers(void)
{
	int number;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (number = 0; number < 15; number++)
		{
			if (number > 9)
				_putchar((number / 10) + '0');
			_putchar((number % 10) + '0');
		}
		_putchar('\n');
	}
}
