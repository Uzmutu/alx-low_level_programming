#include <stdio.h>
#include "main.h"
#include <stdlib.h>
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
 * string_nconcat - function that concatenate
 * @s1: a string
 * @s2: astring where n byte will be concatenate to s1
 * @n: number of byte to concatenate to s1
 *
 * Description: function that concatenates two strings.
 *
 * Return: returns a pointer to a newly allocated space in memory,
 * which contains s1, followed by the first n
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i;
	unsigned int len1;
	unsigned int len2;
	unsigned int len;
	char *ptr;

	len1 = _strlen_recursion(s1);
	len2 = _strlen_recursion(s2);
	if (n < len2)
		n = len2;
	len = len1 + len2;
	ptr = malloc(sizeof(char) * (len) + 1);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
	{
		if (i < len1)
			ptr[i] = s1[i];
		else
			ptr[i] = s2[i - len1];
	}
	return (ptr);
}
