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
	int j;
	int separators[] = {',', ';', '.', '?', '"', '(', ')',
		'{', '}', ' ', '\n', '\t'};

	for (i = 0; s[i] != '\0'; i++)
	{
		if (i == 0)
		{
			if (s[i] >= 'a' && s[i] <= 'z')
				s[i] = s[i] - 32;
		}
		for (j = 0; separators[j] != '\0'; j++)
		{
			if (s[i] == separators[j])
			{
				++i;
				if (s[i] >= 'a' && s[i] <= 'z')
					s[i] = s[i] - 32;
			}
		}
	}
	return (s);
}
