#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * op_add - function that add
 * @a: number of the operation
 * @b: number of the operation
 *
 * Return: return the sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - function that soustract
 * @a: number of the operation
 * @b: number of the operation
 *
 * Return: return the substraction of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - function that multiply
 * @a: number of the operation
 * @b: number of the operation
 *
 * Return: return the product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - function that divide
 * @a: number of the operation
 * @b: number of the operation
 *
 * Return: return the quotient of a and b
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - function
 * @a: number of the operation
 * @b: number of the operation
 *
 * Return: return the remainder of a and b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
