#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
 * print_last_digit - function printing last digit
 * @a: variable to be processed
 *
 * Description: examine a givin number et give his last digit
 *
 * Return: return the last digit
 */
int print_last_digit(int a)
{
	int v;

	if (a >= 0)
	{
		v = a % 10;
		_putchar((v) + '0');
	}
	if (a < 0)
	{
		a *= -1;
		v = a % 10;
		_putchar((v) + '0');
	}
	return (0);
}
