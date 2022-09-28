#include <stdio.h>
#include "main.h"
/**
 * check_sqr - function that control
 * @num: integer to test
 * @i: controller
 *
 * Description: local function that check for a multiple of a given
 * number n in _sqrt_recursion
 *
 * Return: return -1 if no fit value and i if fit value is find
 */
int check_sqr(int num, int i)
{
	if (i * i > num)
		return (-1);
	else if (i * i == num)
		return (i);
	return (check_sqr(num, i + 1));
}
/**
 * _sqrt_recursion - function that check square root
 * @n: value to check
 *
 * Description: function that returns the natural square root of a number.
 *
 * Return: returns the natural square root if exist and -1 if not
 */
int _sqrt_recursion(int n)
{
	return (check_sqr(n, 1));
}
