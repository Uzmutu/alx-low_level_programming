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
	int start_of_array;
	int end_of_array;
	int temporary_int;

	start_of_array = 0;
	end_of_array = n - 1;

	while (start_of_array < end_of_array)
	{
		temporary_int = a[start_of_array];
		a[start_of_array] = a[end_of_array];
		a[end_of_array] = temporary_int;
		start_of_array++;
		end_of_array--;
	}
}
