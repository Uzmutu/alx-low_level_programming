#include <stdlib.h>
#include <stdio.h>
/**
 *  main - to print
 *
 *  Description: program that computes and prints the
 *  sum of all the multiples of 3 or 5 below 1024 (excluded),
 *
 *  Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	int c;

	c = 0;
	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			c = c + i;
		}

	}
	printf("%d\n", c);

	return (0);
}
