#include <stdlib.h>
#include <stdio.h>
/**
 *  main - use putchar() to print
 *
 *  Description: This script print alphabet in lowercase
 *
 *  Return: Always 0 (Success)
 */
int main(void)
{
	char a;

	a = 'a';
	while (a <= 'z')
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
