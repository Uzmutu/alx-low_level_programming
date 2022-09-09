#include <stdlib.h>
#include <stdio.h>
/**
 *  main - use printf() to print base 10
 *
 *  Description: printing 0 to 9 separated by commas and space
 *
 *  Return: Always 0 (Success)
 */
int main(void)
{
	int c;

	c = 060;
	while (c < 072)
	{
		putchar((c));
		if (c != 071)
		{
			putchar(',');
			putchar(' ');
		}
		c++;
	}
	putchar('\n');
	return (0);
}
