#include <stdio.h>
#include <stdlib.h>
/**
 * main - enry point
 * @argc: count the number of command line arguments
 * @argv: array containing the arguments passed in the command line
 *
 * Description: program that prints the number of arguments passed into it.
 *
 * Return: returns 0 if success
 */
int main(int argc, char *argv[])
{
	if (argv)
		printf("%d\n", argc - 1);
	return (0);
}
