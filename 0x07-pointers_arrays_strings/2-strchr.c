#include <stdio.h>
#include "main.h"
/**
 * _strchr - function that search
 * @s: string where the research is done
 * @c: the character to research
 *
 * Description:  function that locates a character in a string.
 *
 * Return: returns a pointer to the first occurrence
 * of the character c in the string s
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (0);
}
