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
	unsigned long n1;
	unsigned long n2;
	unsigned long n3;
	int i;

	n1 = 1;
	n2 = 2;
	printf("%lu, %lu", n1, n2);
	for (i = 0; i < 48; i++)
	{
		n3 = n1 + n2;
		printf(", %lu", n3);

		n1 = n2;
		n2 = n3;

		if (i == 47)
			printf("\n");

	}

	return (0);
}
