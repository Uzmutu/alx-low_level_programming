#include <stdio.h>
#include "main.h"
/**
 * _memset - function that fills
 * @s: string to fill
 * @b: char who filled s
 * @n: number of time to fill s
 *
 * Description: function that fills memory with a constant byte.
 *
 * Return: return s filled with b
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
