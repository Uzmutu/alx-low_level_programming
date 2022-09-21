#include <stdio.h>
#include "main.h"
/**
 * _strncat - function that concatenate n byte
 * @dest: destination of copy
 * @src: source of copy
 * @n: number of byte to append
 *
 * Description: function that concatenates two strings.
 * It will use at most n bytes from src
 *
 * Return: return a string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int count;

	count = 0;
	i = 0;
	while (dest[count] != '\0')
		count++;
	while (i < n && (dest[count++] = src[i++]) != '\0')
		;
	dest[count] = '\0';
	return (dest);
}
