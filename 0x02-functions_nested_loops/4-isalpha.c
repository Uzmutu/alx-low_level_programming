#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
 * _isalpha - check for alphabetic character
 * @c: variable tested
 *
 * Description: check if the given argument is alphabetic, return '1' if true
 * return '0' if false
 *
 * Return: return '1' if true an '0' if false
 */
int _isalpha(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
