#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
 * print_numbers - print from 0 to 9
 *
 * Description: print number from 0 to 9 followed by new line with _putchar
 *
 * Return: void
 */
void print_numbers(void)
{
	int number;

	number = 48;

	while (number < 58)
	{
		_putchar(number);
		number++;
	}
	_putchar('\n');
}
