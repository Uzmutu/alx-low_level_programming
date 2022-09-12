#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 *  main - use putchar() to print combination
 *
 *  Description: printing all combination 0 and 9 separated by commas and space
 *
 *  Return: Always 0 (Success)
 */
int main(void)
{
	int a;
	int b;

	for (a = 0; a <= 9; a++)
	{
		for (b = a + 1; b <= 9; b++)
		{
			putchar((a % 10) + '0');
			putchar((b % 10) + '0');
			if (a == 8 && b == 9)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
