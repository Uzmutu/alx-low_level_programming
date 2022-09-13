#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "main.h"
/**
 * print_to_98 - value n to 98
 * @n: starting value to 98
 *
 * Description:  prints all natural numbers from n to 98,
 * separated by comma folowed by space. followed by a new line
 *
 * Return: return all value from n to 98
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		while (n <= 98)
		{
			printf("%d", n);
			printf(",");
			printf(" ");
			n++;
			if (n >= 98)
			{
				break;
			}
		}
	}
	if (n > 98)
	{
		while (n >= 98)
		{
			printf("%d", n);
			printf(",");
			printf(" ");
			--n;
			if (n <= 98)
				break;
		}
	}
	if (n == 98)
	{
		printf("%d\n", n);
	}

}
