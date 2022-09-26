#include <stdio.h>
#include "main.h"
/**
 * _strlen - function that count
 * @s: pointer of the string that be counted
 *
 * Description: function who count the lenght of a given string
 *
 * Return: return the lenght
 */
int _strlen(char *s)
{
	int count;

	count = 0;
	while (*s != '\0')
	{
		count++;
		s++;
	}
	return (count);
}
/**
 * _strncmp - function that compare
 * @dest: string to compare
 * @src: string to compare
 * @n: number of byte
 *
 * Description: this function compare if n byte of two string are the same
 *
 * Return: return 0 if true;
 */
int _strncmp(char *dest, char *src, size_t n)
{
	while (n && *dest && (*dest == *src))
	{
		dest++;
		src++;
		n--;
	}
	if (n == 0)
	{
		return (0);
	}
	return (*(unsigned char *)dest - *(unsigned char *)src);
}
/**
 * _strstr - function that search
 * @haystack: pointer of the string based search
 * @needle: pointer of searched substring
 *
 * Description: function that locates a substring
 *
 * Return: a pointer to the beginning of the located substring,
 * or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	int i;

	i = _strlen(needle);
	while (*haystack)
	{
		if (_strncmp(haystack, needle, i) == 0)
		{
			return (haystack);
		}
		haystack++;
	}
	return (0);
}
