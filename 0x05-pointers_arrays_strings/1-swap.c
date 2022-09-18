#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
 * swap_int - function that swap
 * @a: pointer of the value to swap with *b
 * @b: pointer of the value to swap with *a
 *
 * Description: function who swap two value
 *
 * Return: return swap value
 */
void swap_int(int *a, int *b)
{
	int temporary_int;

	temporary_int = *a;
	*a = *b;
	*b = temporary_int;
}
