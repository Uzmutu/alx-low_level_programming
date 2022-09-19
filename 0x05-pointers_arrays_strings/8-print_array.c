#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
 * print_array - function printing array
 * @a: pointer of the array
 * @n: number of elements of the array to be printed
 *
 * Description: function that prints n elements of an array of integers,
 * followed by a new line
 *
 * Return: return the lenght
 */
void print_array(int *a, int n)
{
	int count;
	int max;

	n -= 1;
	max = n;
	for (i = 0; i <= max; i++)
	{
		printf("%d", a[i]);
		if (i != max)
			printf(", ");
	}
	printf('\n');

}
