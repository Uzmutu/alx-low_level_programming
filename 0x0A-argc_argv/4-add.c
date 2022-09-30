#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * @argc: count the number of command line arguments
 * @argv: array containing the arguments passed in the command line
 *
 * Description: program that adds positive numbers
 *
 * Return: returns 0 if success, return 1 if error
 */
int main(int argc, char *argv[])
{
	int i;
	int sum;

	sum = 0;
	for (i = 1; i < argc; i++)
	{
		if (atoi(argv[i]))
			sum += atoi(argv[i]);
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", sum);
	return (0);
}
