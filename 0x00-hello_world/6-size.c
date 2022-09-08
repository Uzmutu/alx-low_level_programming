#include <stdio.h>
/**
 * main - print size of var type with printf()&sizeof()
 *
 * Description : got the size of variable type
 *
 * Return: return always 0
 */
int main(void)
{
	printf("Size of a char: %lu byte(s)\n", sizeof(char));
	printf("Size of a int: %lu byte(s)\n", sizeof(int));
	printf("Size of a long int: %ld byte(s)\n", sizeof(long));
	printf("Size of a long long int: %ld byte(s)\n", sizeof(long long));
	printf("Size of a float: %lu byte(s)\n", sizeof(float));
	return (0);
}
