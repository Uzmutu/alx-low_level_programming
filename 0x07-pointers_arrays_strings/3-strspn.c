#include <stdio.h>
#include "main.h"
/**
 * _strspn - function that gets the length of a prefix substring
 * @s: string who the search is done
 * @accept: string researched
 *
 * Description: function that gets the length of a prefix substring
 *
 * Return: returns the number of bytes in the initial segment of s
 * which consist only of bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	int k;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (k = 0; *(accept + k) != *(s + i); k++)
		{
			if (*(accept + k) == '\0')
			{
				return (i);
			}
		}
	}
	return (i);
}
