#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * @argc: count the number of command line arguments
 * @argv: array containing the arguments passed in the command line
 *
 * Description: program that prints all arguments it receives, one per line
 *
 * Return: returns 0 if success
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
