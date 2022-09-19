#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
 * puts_half - function that cut in half
 * @str: pointer of the string
 *
 * Description: function function that prints half of a string,
 * followed by a new line. If the number of characters is odd,
 * the function should print the last n characters of the string,
 * where n = (length_of_the_string - 1) / 2
 *
 * Return: return string
 */
void puts_half(char *str)
{
	int length_of_the_string;
	int half;
	int count;
	int n;

	length_of_the_string = 0;
	while (str[length_of_the_string] != '\0')
	{
		length_of_the_string++;
	}
	if (length_of_the_string % 2 != 0)
	{
		n = (length_of_the_string - 1) / 2;
		count = (length_of_the_string - n);
		while (str[count] != '\0' && count <= length_of_the_string)
		{
			_putchar(str[count]);
			count++;
		}
		_putchar('\n');
	}
	else
	{
		half = length_of_the_string / 2;
		count = half;
		while (str[count] != '\0' && count <= length_of_the_string)
		{
			_putchar(str[count]);
			count++;
		}
		_putchar('\n');
	}
}
