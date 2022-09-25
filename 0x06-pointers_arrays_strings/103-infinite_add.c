#include <stdio.h>
#include "main.h"
/**
 * _strlen - function that count
 * @s: pointer of the string that be counted
 *
 * Description: function who count the lenght of a given string
 *
 * Return: return the lenght
 */
int _strlen(char *s)
{
	int count;

	count = 0;
	while (*s != '\0')
	{
		count++;
		s++;
	}
	return (count);
}
/**
 * reverse - reverse string
 * @s: string to reverse
 *
 * Description: reverse a given string s
 *
 * Return: return string
 */
void reverse(char s[])
{
	int temp;
	int i;
	int j;

	for (i = 0, j = _strlen(s) - 1 ; i < j ; i++, j--)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
	}
}
/**
 * *infinite_add - function for addition
 * @n1: string number
 * @n2: string number
 * @r: buffer that the function will use to store the result
 * @size_r: size of the buffer r
 *
 * Description: function that adds two numbers
 *
 * Return: return 0 or r
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int length_n1;
	int length_n2;
	int length;
	int sum;
	int ret;

	length_n1 = _strlen(n1);
	length_n2 = _strlen(n2);
	if (length_n1 + 2 > size_r || length_n2 + 2 > size_r)
		return (0);
	ret = 0;
	for (length_n1 -= 1, length_n2 -= 1, length = 0; length < (size_r - 1);
			length_n1--, length_n2--, length++)
	{
		sum = ret;
		if (length_n1 >= 0)
			sum += n1[length_n1] - '0';
		if (length_n2 >= 0)
			sum += n2[length_n2] - '0';
		if (length_n1 < 0 && length_n2 < 0 && sum == 0)
		{
			break;
		}
		ret = sum / 10;
		r[length] = (sum % 10) + '0';
	}
	r[length] = '\0';
	if (length_n1 >= 0 || length_n2 >= 0 || ret)
		return (0);
	reverse(r);
	return (r);
}
