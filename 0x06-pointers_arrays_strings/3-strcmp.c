#include <stdio.h>
#include "main.h"
/**
 * _strcmp - function that compare
 * @s1: string to compare to s2
 * @s2: string to compare to s1
 *
 * Description: this function compare to string and return an int
 *
 * Return: return difference
 */
int _strcmp(char *s1, char *s2)
{
	int count;

	for (count = 0; (s1[count] == s2[count]); count++)
	{
		if (s1[count] == '\0')
			return (0);
	}
	return (s1[count] - s2[count]);

}
