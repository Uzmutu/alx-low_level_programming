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
	int a;
	int b;
	int c;
	int d;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			for (c = 0; c <= 9; c++)
			{
				for (d = c + 1; d <= 9; d++)
				{
					putchar((a % 10) + '0');
					putchar((b % 10) + '0');
					putchar(' ');
					putchar((c % 10) + '0');
					putchar((d % 10) + '0');
					if (a == 9 && b == 8 && c == 9 && d == 9)
						continue;
					putchar(',');
					putchar(' ');
				}

			}
		}
	}

	putchar('\n');
	return (0);
}
