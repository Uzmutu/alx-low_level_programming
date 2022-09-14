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

	n1 = 0;
	n2 = 1;
	for (i = 0; i < 98; i++)
	{
		n3 = n1 + n2;
		printf("%lu, ", n3);

		n1 = n2;
		n2 = n3;

		if (i == 97)
			printf("\n");

	}

	return (0);
}
