#include <stdio.h>
#include "main.h"
/**
 * _puts_recursion - function that print
 * @s: string to print
 *
 * Description: function that prints a string, followed by a new line.
 *
 * Return: return void
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
		_putchar('\n');
	else
	{
		_putchar(s[0]);
		s = s + 1;
		_puts_recursion(s);
	}
}
