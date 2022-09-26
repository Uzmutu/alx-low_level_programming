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
	int i;

	i = 0;
	while (*(s + i) != '\0')
	{
		if (*(s + i) == c)
		{
			return ((s + i));
		}
		i++;
	}
	if (*(s + i) == c)
		return ((s + i));
	return (0);
}
