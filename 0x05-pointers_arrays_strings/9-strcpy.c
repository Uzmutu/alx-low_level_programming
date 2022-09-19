#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
 * *_strcpy - function that copy
 * @dest: pointer of the copied string destination
 * @src: pointer of string that copied
 *
 * Description: function who copy a given string
 *
 * Return: return string dest
 */
char *_strcpy(char *dest, char *src)
{
	int count;

	count = 0;
	while (src[count])
	{
		dest[count] = src[count];
		count++;
	}
	dest[count] = '\0';
	return (dest);
}
