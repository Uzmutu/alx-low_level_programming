#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 *  main - use putchar() to print combination
 *
 *  Description: prints all possible combinations of two two-digit numbers.
 *  separated by commas and space
 *
 *  Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int k;

	for (n = 0; n < 99; n++)
	{
		for (k = n + 1; k < 100; k++)
		{
			putchar((n / 10) + '0');
			putchar((n % 10) + '0');
			putchar(' ');
			putchar((k / 10) + '0');
			putchar((k % 10) + '0');
			if (n == 98 && k == 99)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
