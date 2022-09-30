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
	int money;
	int cents;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = 0;
	money = atoi(argv[1]);
	for (cents = 0; money > 0; cents++)
	{
		if (money - 25 >= 0)
			money = money - 25;
		else if (money - 10 >= 0)
			money = money - 10;
		else if (money - 5 >= 0)
			money = money - 5;
		else if (money - 2 >= 0)
			money = money - 2;
		else if (money - 1 >= 0)
			money = money - 1;
	}
	printf("%d\n", cents);
	return (0);
}
