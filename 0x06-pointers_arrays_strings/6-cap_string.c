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

	i = 0;
	if (s[i] == '\0')
		return (s);
	else if (s[i] != '\0')
	{
		while (s[i] != '\0')
		{
			if (s[i] >= 'a' && s[i] <= 'z')
			{
				if (i == 0)
				{
					s[i] = s[i] - 32;
				}
				else if (s[i - 1] == ',' || s[i - 1] == ';' || s[i - 1]
					== '.' || s[i - 1] == '!' ||
					s[i - 1] == '"' || s[i - 1] == ')' || s[i - 1] == '(' ||
					s[i - 1] == '{' || s[i - 1] == '}' || s[i - 1] == '\n' ||
					s[i - 1] == 32 || s[i - 1] == '\t')
				{
					s[i] = s[i] - 32;
				}
			}
			i++;
		}
	}
	return (s);
}
