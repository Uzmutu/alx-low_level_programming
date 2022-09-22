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
	char separators[] = {',', ';', '.', '?', '"', '(', ')',
		'{', '}', ' ', '\n', '\t'};

	while (s[i] != '\0')
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
		i++;
	}
	return (s);
}
