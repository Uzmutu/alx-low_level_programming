#include <stdio.h>
#include "main.h"
/**
 * *string_toupper - function that convert
 * @s: string to convert
 *
 * Description: function that changes all lowercase letters
 * of a string to uppercase.
 *
 * Return: the changed string
 */
char *string_toupper(char *s)
{
	int count;

	for (count = 0; s[count] != '\0'; count++)
	{
		if (s[count] >= 'a' && s[count] <= 'z')
			s[count] = s[count] - 32;
	}
	return (s);
}
