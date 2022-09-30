#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * @argc: count the number of command line arguments
 * @argv: array containing the arguments passed in the command line
 *
 * Description: program that prints the minimum number of coins
 * to make change for an amount of money.
 *
 * Return: returns 0 if success, 1 if error
 */
int main(int argc, char *argv[])
{
	int cents_25;
	int cents_10;
	int cents_5;
	int cents_2;
	int cents_1;
	int num;
	int cents;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	num = 0;
	cents = atoi(argv[1]);
	cents_25 = cents / 25;
	cents_10 = (cents - (cents_25 * 25)) / 10;
	cents_5 = (cents - ((cents_25 * 25) + (cents_10 * 10))) / 5;
	cents_2 = (cents - ((cents_25 * 25) + (cents_10 * 10) + (cents_5 * 5))) / 2;
	cents_1 = (cents - ((cents_25 * 25) + (cents_10 * 10)
				+ (cents_5 * 5) + (cents_2 * 2)));
	num = cents_25 + cents_10 + cents_5 + cents_2 + cents_1;
	printf("%d\n", num);
	return (0);
}
