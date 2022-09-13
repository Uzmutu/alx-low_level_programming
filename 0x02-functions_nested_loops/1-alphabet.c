#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
 * print_alphabet - print alphabet in lowercase
 */
void print_alphabet(void)
{
	char letter;

	letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
}
