#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
 * _islower - check for lowercase character
 * @c: variable tested
 *
 * Description: check if the given argument is a lowercase, return '1' if true
 * return '0' if false
 *
 * Return: return '1' if true an '0' if false
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
