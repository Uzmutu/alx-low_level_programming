#include <stdio.h>
#include <stdio.h>
#include "main.h"
/**
 * _strlen_recursion - function that count
 * @s: string to test
 *
 * Description: function that count the length of string s recursively
 *
 * Return: return the length in int
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
		return (_strlen_recursion(s + 1) + 1);
	else
		return (0);
}
/**
 * str_concat - function that concatenate
 * @s1: string to concatenate
 * @s2: string 2 to concatenate
 *
 * Description: function that concatenates two strings
 *
 * Return: returns a new string
 */
char *str_concat(char *s1, char *s2)
{
	char *str;
	int i;
	int j;
	int len1;
	int len2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len1 = _strlen_recursion(s1);
	len2 = _strlen_recursion(s2);
	str = malloc(sizeof(char) * (len1 + len2 + 1));
	if (str == NULL)
		return (NULL);
	for (i = 0, j = 0; *(s1 +  i); i++, j++)
		str[j] = s1[i];
	for (i = 0; s2[i]; i++)
		str[j] = s2[i];
	return (str);
}
