#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
 * puts2 - function that copy
 * @str: pointer of the string
 *
 * Description: function that prints every other character of a string,
 * starting with the first character, followed by a new line.
 *
 * Return: return the string
 */
void puts2(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str = str + 2;
	}
	_putchar('\n');
}
