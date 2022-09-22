#include <stdio.h>
#include "main.h"
/**
 * _strlen - function that count
 * @s: pointer of the string that be counted
 *
 * Description: function who count the lenght of a given string
 *
 * Return: return the lenght
 */
int _strlen(char *s)
{
	int count;

	count = 0;
	while (*s != '\0')
	{
		count++;
		s++;
	}
	return (count);
}
/**
 * _strcmp - function that compare
 * @s1: string to compare to s2
 * @s2: string to compare to s1
 *
 * Description: this function compare to string and return an int
 *
 * Return: return 15, -15 or 0
 */
int _strcmp(char *s1, char *s2)
{
	int length_str_1;
	int length_str_2;

	length_str_1 = _strlen(s1);
	length_str_2 = _strlen(s2);

	if (length_str_1 > length_str_2)
		return (15);
	else if (length_str_1 < length_str_2)
		return (-15);
	else
		return (0);
}
