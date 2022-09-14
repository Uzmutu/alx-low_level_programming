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

	v = a % 10;
	if (v < 0)
		v *= -1;
	_putchar((v) + '0');
	return (v);
}
