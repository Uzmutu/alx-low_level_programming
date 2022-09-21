#include <stdio.h>
#include "main.h"
/**
 * _strcat - function that concatenate
 * @dest: destination of copy
 * @src: source of copy
 *
 * Description: This function appends the src string to the dest string,
 * overwriting the terminating null byte (\0) at the end of dest,
 * and then adds a terminating null byte
 *
 * Return: return a string;
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int count;

	count = 0;
	i = 0;
	while (dest[count] != '\0')
		count++;
	while ((dest[count++] = src[i++]) != '\0')
		;
	dest[count] = '\0';
	return (dest);
}
