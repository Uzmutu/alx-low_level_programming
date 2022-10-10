#include <stdio.h>
#include "main.h"
/**
 * _puts_recursion - function that print
 * @s: string to print
 *
 * Description: function that prints a string, followed by anew line.
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
		s += 1;
		_puts_recursion(s);
	}
}
/**
 * main - entry point
 *
 * Description: program that prints the name of the file it was compiled from,
 * followed by a new line
 *
 * Return: returns 0 if SUCCESS
 */
int main(void)
{
	_puts_recursion(__FILE__);
	return (0);
}
