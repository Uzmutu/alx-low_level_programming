#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 *  positive_or_negative - Do a test with if condition
 *  @i: variable to be tested
 *
 *  Description: This script test if a number is positive or negative
 *
 *  Return: Always 0 (Success)
 */
void positive_or_negative(int i)
{

	if (i > 0)
		printf("%d is positive\n", i);
	else if (i < 0)
		printf("%d is negative\n", i);
	else
		printf("%d is zero\n", i);

}
