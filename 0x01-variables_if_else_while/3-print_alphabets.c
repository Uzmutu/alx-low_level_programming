#include <stdlib.h>
#include <stdio.h>
/**
 *  main - use putchar() to print
 *
 *  Description: printing alphabet in lowercase then uppercase
 *
 *  Return: Always 0 (Success)
 */
int main(void)
{
	char lower_c;
	char upper_c;

	lower_c = 'a';
	upper_c = 'A';
	while (lower_c <= 'z')
	{
		putchar(lower_c);
		lower_c++;
	}
	while (upper_c <= 'Z')
	{
		putchar(upper_c);
		upper_c++;
	}
	putchar('\n');
	return (0);
}
