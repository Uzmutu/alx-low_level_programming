#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
 * _atoi - function who convert
 * @s: pointer of the string that be tested
 *
 * Description: function that convert a string to an integer.
 *
 * Return: return value
 */
int _atoi(char *s)
{
	int count1;
	int count2;
	int digit;
	int sign;

	count1 = 0;
	count2 = 0;
	digit = 0;
	sign = 1;
	while ((s[count1] < '0' || s[count1] > '9') && (s[count1] != '\0'))
	{
		if (s[count1] == '-')
			sign *= -1;
		count1++;
	}
	count2 = count1;
	while ((s[count2] >= '0') && (s[count2] <= '9'))
	{
		digit = digit * 10 + sign * (s[count2] - '0');
		count2++;
	}
	return (digit);
}
