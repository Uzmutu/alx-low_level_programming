#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
 * _isupper - check for uppercase character
 * @c: variable tested
 *
 * Description: check if the given argument is a uppercase, return '1' if true
 * return '0' if false
 *
 * Return: return '1' if true an '0' if false
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
