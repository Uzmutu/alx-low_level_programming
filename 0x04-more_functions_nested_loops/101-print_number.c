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
		_putchar(45);
		n *= -1;
		if (n / 10)
			print_number(n / 10);
		_putchar(n % 10 + '0');
	}
	else
	{
		if (n / 10)
			print_number(n / 10);
		_putchar(n % 10 + '0');
	}
}
