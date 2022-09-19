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

	while (str[count] != '\0')
		count++;
	length = count;
	for (i = 0; i <= length; i = i + 2)
	{
		if (*str != '\0')
			_putchar(str[i]);
		else
			break;
	}
	_putchar('\n');
}
