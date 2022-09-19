#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
 * rev_string - function that count
 * @s: pointer of the string
 *
 * Description: function that print a string in reverse
 *
 * Return: return the reverse string
 */
void rev_string(char *s)
{
	int count;
	int length;
	int i;
	char *begin_of_string;
	char *end_of_string;
	char temporary_char;

	begin_of_string = s;
	end_of_string = s;
	count = 0;
	while (s[count] != '\0')
		count++;
	length = count;
	for (i = 0; i < (length - 1); i++)
		end_of_string++;
	for (i = 0; i < (length / 2); i++)
	{
		temporary_char = *end_of_string;
		*end_of_string = *begin_of_string;
		*begin_of_string = temporary_char;
		begin_of_string++;
		end_of_string--;
	}

}
