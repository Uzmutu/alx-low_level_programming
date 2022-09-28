#include <stdio.h>
#include "main.h"
/**
 * _print_rev_recursion - function that print
 * @s: string to print
 *
 * Description: function that prints a string in reverse.
 *
 * Return: return void
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(s[0]);
	}
}
