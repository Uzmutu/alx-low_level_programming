#include <stdlib.h>
#include <stdio.h>
/**
 *  main - to prin fibonacci
 *
 *  Description: print 50 first fibonacci number
 *
 *  Return: Always 0 (Success)
 */
int main(void)
{
	int n1;
	int n2;
	int n3;
	int i;

	n1 = 1;
	n2 = 2;
	printf("%d, %d", n1, n2);
	for (i = 0; i < 50; i++)
	{
		n3 = n1 + n2;
		printf(", %d", n3);

		n1 = n2;
		n2 = n3;

	}
	printf("\n");

	return (0);
}
