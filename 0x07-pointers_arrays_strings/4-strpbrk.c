#include <stdio.h>
#include "main.h"
/**
 * _strpbrk - function that searches
 * @s: string where the search is done
 * @accept: string searched
 *
 * Description: function that searches a string for any of a set of bytes.
 *
 * Return: returns a pointer to the byte in s that matches
 * one of the bytes in accept, or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	int i;
	int k;

	for (i = 0; *(s + i); i++)
	{
		for (k = 0; *(accept + k); k++)
		{
			if (*(s + i) == *(accept + k))
				break;
		}
		if (*(accept + k))
			return ((s + i));
	}
	return (0);
}
