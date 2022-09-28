#include <stdio.h>
#include "main.h"
/**
 * _strlen_recursion - function that count
 * @s: string to test
 *
 * Description: function that count the length of string s recursively
 *
 * Return: return the length in int
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
		return (_strlen_recursion(s + 1) + 1);
	else
		return (0);
}
/**
 * palind_check - checker for palindrome
 * @ptr: pointer to the pointer of the string to check
 * @i: position of char
 * @j: position of char
 *
 * Description: this function check the similitude or not of certain
 * character of the string
 *
 * Return: return 1 or 0
 */
int palind_check(char *ptr, int i, int j)
{
	if (*(ptr + i) != *(ptr + j))
		return (0);
	else if (i == j)
		return (1);
	else if (i < j + 1)
		return (palind_check(ptr, i + 1, j - 1));
	else
		return (1);
}
/**
 * is_palindrome - function that check for palindrome
 * @s: pointer the string to check
 *
 * Description: This function if the s is a palindrome or not
 *
 * Return: returns 1 if true and 0 if false
 */
int is_palindrome(char *s)
{
	return (palind_check(s, 0, _strlen_recursion(s) - 1));
}
