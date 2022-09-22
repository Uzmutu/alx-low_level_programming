#include <stdio.h>
#include "main.h"
/**
 * reverse_array - function that reverse
 * @a: array to reverse
 * @n: number of byte to reverse in a
 *
 * Description: That function reverse n byte of an array a
 *
 * Return: return the reversed array
 */
void reverse_array(int *a, int n)
{
	int str[n];
	int j;
	int i;

	j = n - 1;
	for (i = 0; i < n; i++)
		str[j - i] = a[i];
	for (i = 0; i < n; i++)
		a[i] = str[i];
}
