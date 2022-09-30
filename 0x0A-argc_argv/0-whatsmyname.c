#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that print the name of the program
 * @argc: count the number of command line arguments
 * @argv: array containing the arguments passed in the command line
 *
 * Description: program that prints its name, followed by a new line.
 *
 * Return: returns 0 if success
 */
int main(int argc, char *argv[])
{
	if (argc == 1)
		printf("%s\n", argv[0]);
	return (0);
}
