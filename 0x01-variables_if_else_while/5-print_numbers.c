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
	int i;

	i = 0;
	while (i < 10)
	{
		printf("%d", i);
		i++;
	}
	printf("\n");
	return (0);
}
