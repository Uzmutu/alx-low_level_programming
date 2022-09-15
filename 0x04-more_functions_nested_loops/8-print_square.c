#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
 * print_square - function that print some #
 * @size: variable defining size of the square
 *
 * Description: prints a square, followed by a new line greater than 0
 *
 * Return: return square
 */
void print_square(int size)
{
	if (size <= 0)
		_putchar('\n');
	else
	{
		int i;
		int counter;

		counter = 1;
		while (counter <= size)
		{
			for (i = 1; i <= size; i++)
				_putchar('#');
			_putchar('\n');
			counter++;
		}
	}
}
