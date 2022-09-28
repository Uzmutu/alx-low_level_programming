#include <stdio.h>
#include "main.h"
/**
 * check - function that control
 * @n: number to verify
 * @i: verificator
 *
 * Description: this function verify if n is divisible by another number
 * than himself
 *
 * Return: returns 0 if true and 1 if false
 */
int check(int n, int i)
{
	if (n == i)
		return (1);
	else if (n % i == 0)
		return (0);
	else
		return (check(n, i + 1));
}
/**
 * is_prime_number - function that check
 * @n: number to check
 *
 * Description: Function that verify if the given number is
 * a prime number or not
 *
 * Return: return 1 if prime and 0 if not prime number
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else if (n == 2)
		return (1);
	else
		return (check(n, 3));
}
