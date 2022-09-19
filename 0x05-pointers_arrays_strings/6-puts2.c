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
	int count;
	int length;
	int i;

	i = 0;
	count = 0;
	while (str[count] != '\0')
		count++;
	length = count;
	while (i <= length)
	{
		_putchar(str[i]);
		i += 2;
	}
	_putchar('\n');
}
