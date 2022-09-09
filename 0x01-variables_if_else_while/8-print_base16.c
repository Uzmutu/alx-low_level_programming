#include <stdlib.h>
#include <stdio.h>
/**
 *  main - use putchar() to print base 16
 *
 *  Description: printing base 16 numbers in lowercase
 *
 *  Return: Always 0 (Success)
 */
int main(void)
{
	char num;
	char alpha;

	num = '0';
	alpha = 'a';
	while (num <= '9')
	{
		putchar(num);
		num++;
	}
	while (alpha <= 'f')
	{
		putchar(alpha);
		alpha++;
	}
	putchar('\n');
	return (0);
}
