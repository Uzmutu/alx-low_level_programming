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
	if (n < 0)
	{
		_putchar('-');
		if (n < -9)
			print_number(n / -10);
		_putchar('0' - n % 10);
	}
	else
	{
		if (n > 9)
			print_number(n / 10);
		_putchar(n % 10 + '0');
	}
}
