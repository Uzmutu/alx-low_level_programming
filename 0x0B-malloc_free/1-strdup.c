#include <stdio.h>
#include <stdlib.h>
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
 * _memcpy - function that copy
 * @dest: string where the copy will be made
 * @src: string source of copy
 * @n: number of byte of src to copy in dest
 *
 * Description: function that copies memory area
 *
 * Return: return string dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
/**
 * _strdup - funtion that copy
 * @str: pointer to a string
 *
 * Description: function that returns a pointer to a
 * newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 *
 * Return: returns a pointer to a newly allocated space or NULL if fail
 */
char *_strdup(char *str)
{
	char *ptr;
	size_t len;

	if (str == 0)
		return (NULL);
	len = _strlen_recursion(str);
	ptr = malloc(len + 1);
	if (ptr == 0)
		return (NULL);
	if (ptr)
		_memcpy(ptr, str, len + 1);
	return (ptr);
}
