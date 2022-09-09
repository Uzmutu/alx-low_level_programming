#include <stdlib.h>
#include <stdio.h>
/**
 *  main - use putchar() to print
 *
 *  Description: This script print alphabet in lowercase and reverse order
 *
 *  Return: Always 0 (Success)
 */
int main(void)
{
	char reverse;

	reverse = 'z';
	while (reverse >= 'a')
	{
		putchar(reverse);
		--reverse;
	}
	putchar('\n');
	return (0);
}
