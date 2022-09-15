#include <stdio.h>
#include <stdlib.h>
/**
 * main - program print largest prime factor
 *
 * Description: prints the largest prime factor of 612852475143,
 * followed by a new line
 *
 * Return: return 0 if (Success)
 */
int main(void)
{
	long number;
	long i;
	long largest;

	number = 612852475143;
	i = 2;
	largest = -1;
	while (number != 0)
	{
		if (number % i != 0)
			i += 1;
		else
		{
			largest = number;
			number = number / i;
			if (number == 1)
			{
				printf("%ld\n", largest);
				break;
			}
		}
	}
	return (0);
}
