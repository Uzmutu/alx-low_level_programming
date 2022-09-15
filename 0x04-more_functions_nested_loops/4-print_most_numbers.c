#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
 * print_most_numbers - print from 0 to 9
 *
 * Description: print number from 0 to 9, except 2 and 4,
 * followed by new line with _putchar
 *
 * Return: void
 */
void print_most_numbers(void)
{
	int number;

	number = 48;

	while (number < 58)
	{
		if (number != 50 && number != 52)
		{
			_putchar(number);
		}
		number++;
	}
	_putchar('\n');
}
