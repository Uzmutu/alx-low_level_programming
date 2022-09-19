#include <stdio.h>
#include <unistd.h>
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
