#include <stdio.h>
#include "main.h"
/**
 * print_number - function that print integer
 * @n: argument that be printed
 *
 * Description: print any given integer
 *
 * Return: return value
 */
void print_number(int n)
{
	int half;
	int half2;

	if (n < 0 && n > -2147483648)
	{
		_putchar('-');
		n = -n;
		if (n / 10)
			print_number(n / 10);
		_putchar(n % 10 + '0');
	}
	else if (n == -2147483648)
	{
		half = (n / -1000);
		half2 = (n % 1000);
		half2 *= -1;
		_putchar('-');
		_putchar((half / 1000000) + '0');
		_putchar(((half % 1000000) / 100000) + '0');
		_putchar((((half % 1000000) % 100000) / 10000) + '0');
		_putchar(((((half % 1000000) % 100000) % 10000) / 1000)  + '0');
		_putchar((((((half % 1000000) % 100000) % 10000) % 1000) / 100)  + '0');
		_putchar(((((((half % 1000000) % 100000)
								% 10000) % 1000) % 100) / 10)  + '0');
		_putchar((half % 10) + '0');
		_putchar((half2 / 100) + '0');
		_putchar(((half2 % 100) / 10) + '0');
		_putchar((half2 % 10) + '0');
	}
	else
	{
		if (n / 10)
		{
			print_number(n / 10);
		}
		_putchar(n % 10 + '0');
	}
}
