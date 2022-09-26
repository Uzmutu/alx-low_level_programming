#include <stdio.h>
#include "main.h"
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
