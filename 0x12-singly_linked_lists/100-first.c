#include <stdio.h>
#include <stdlib.h>
/**
 * func - function that prints
 *
 * Description: function that prints
 * "You're beat! and yet, you must allow,\nI bore my house upon my back!\n"
 * before the main function is executed.
 *
 * Return: Always 0.
 */
void func(void) __attribute__ ((constructor));

void func(void)
{
	char *str;
	char *str_1;

	str = "You're beat! and yet, you must allow,\nI";
	str_1 = "bore my house upon my back!\n";
	printf("%s%s", str, str_1);
}
