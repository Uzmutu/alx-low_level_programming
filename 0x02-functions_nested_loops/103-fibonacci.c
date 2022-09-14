#include <stdlib.h>
#include <stdio.h>
/**
 * main - to print sum of fibonacci
 *
 * Description: print the sum of even number of 50 first fibonacci number
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long number_1;
	unsigned long number_2;
	unsigned long number_3;
	unsigned long sum;
	int i;

	number_1 = 0;
	number_2 = 1;
	sum = 0;
	for (i = 0; i < 49; i++)
	{
		number_3 = number_1 + number_2;
		if (number_3 < 4000000 && number_3 % 2 == 0)
		{
			sum = sum + number_3;
		}
		number_1 = number_2;
		number_2 = number_3;
	}
	printf("The sum of even number in the 50 first fibonacci tree is %lu\n", sum);

	return (0);
}
