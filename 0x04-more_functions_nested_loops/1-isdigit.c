#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
 * _isdigit - check for digit
 * @c: variable tested
 *
 * Description: check if the given argument is a digit, return '1' if true
 * return '0' if false
 *
 * Return: return '1' if true an '0' if false
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
