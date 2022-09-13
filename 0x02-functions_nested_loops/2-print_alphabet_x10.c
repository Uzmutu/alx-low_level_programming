#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
 * print_alphabet_x10 - print alphabet ten times in lowercase
 */
void print_alphabet_x10(void)
{
	int letter;
	int i;

	for (i = 0; i <= 9; i++)
	{
		for (letter = 97; letter <= 122; letter++)
		{
			_putchar((letter));
		}
		_putchar('\n');
	}
}
