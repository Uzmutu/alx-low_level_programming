#include <stdlib.h>
#include <stdio.h>
/**
 *  main - use printf() to print base 10
 *
 *  Description: printing all single digit numbers of base 10 starting from 0
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
		c++;
	}
	putchar('\n');
	return (0);
}
