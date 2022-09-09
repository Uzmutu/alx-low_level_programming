#include <stdlib.h>
#include <stdio.h>
/**
 *  main - use putchar() to print
 *
 *  Description: script that print alphabet in lowercase except q et e
 *
 *  Return: Always 0 (Success)
 */
int main(void)
{
	char a;

	a = 'a';
	while (a <= 'z')
	{
		if (a != 'e' && a != 'q')
		{
			putchar(a);
		}
		a++;
	}
	putchar('\n');
	return (0);
}
