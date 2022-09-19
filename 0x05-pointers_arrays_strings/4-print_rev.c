#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
 * print_rev - function that count
 * @s: pointer of the string
 *
 * Description: function that print a string in reverse
 *
 * Return: return the reverse string
 */
void print_rev(char *s)
{
	int count;

	count = 0;
	while (s[count] != '\0')
		count++;
	for (count = count - 1; count >= 0; count--)
		_putchar(s[count]);
	_putchar('\n');

}
