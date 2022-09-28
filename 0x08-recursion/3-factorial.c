#include <stdio.h>
#include "main.h"
/**
 * factorial - function that calculate
 * @n: given integer
 *
 * Description: This function calculate recursively the factorial of
 * given number n
 *
 * Return: return -1 if n less than 0, 1 if n equal to 0
 * and the factorial if n greater than 0
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
