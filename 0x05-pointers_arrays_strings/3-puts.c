#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
 * _puts - function that copy
 * @str: pointer of the string that be copied
 *
 * Description: function who copy a string, followed by a new line
 *
 * Return: return the string
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
