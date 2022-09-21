#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
 * *_strncpy - function that copy
 * @dest: pointer of the copied string destination
 * @src: pointer of string that copied
 * @n: number of byte to copy
 *
 * Description: function who copy a given string
 *
 * Return: return string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int count;

	for (count = 0; count < n; count++)
		dest[count] = src[count];
	return (dest);
}
