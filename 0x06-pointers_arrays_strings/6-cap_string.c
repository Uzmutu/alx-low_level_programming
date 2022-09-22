#include <stdio.h>
#include "main.h"
/**
 * *cap_string - function that capitalize
 * @s: manipulated string
 *
 * Description: function that capitalize all words.
 *
 * Return: the changed string
 */
char *cap_string(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (i == 0)
		{
			if (s[i] >= 'a' && s[i] <= 'z')
				s[i] = s[i] - 32;
		}
		if (s[i] == ' ')
		{
			++i;
			if (s[i] >= 'a' && s[i] <= 'z')
				s[i] = s[i] - 32;
		}
		if (s[i] == '!' || s[i] == ';' || s[i] == '?'
				|| s[i] == '(' || s[i] == ')' || s[i] == '{'
				|| s[i] == '}' || s[i] == '\n' || s[i] == '\t'
				|| s[i] == '"' || s[i] == ',' || s[i] == '.')
		{
			++i;
			if (s[i] == ' ')
			{
				++i;
			}
			if (s[i] >= 'a' && s[i] <= 'z')
				s[i] = s[i] - 32;
		}
	}
	return (s);
}
