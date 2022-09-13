#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
 * jack_bauer - function to decompt
 *
 * Description: prints every minute of the day of Jack Bauer
 * , starting from 00:00 to 23:59
 *
 * Return: return void
 */
void jack_bauer(void)
{
	int n;

	for (n = 0; n <= 23; n++)
	{
		int k;

		for (k = 0; k < 60; k++)
		{
			_putchar((n / 10) + '0');
			_putchar((n % 10) + '0');
			_putchar(':');
			_putchar((k / 10) + '0');
			_putchar((k % 10) + '0');
			_putchar('\n');
		}
	}
}
