#include "main.h"
/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: A pointer to a string of 0 and 1 chars.
 *
 * Return: If b is NULL or contains chars not 0 or 1 - 0,
 * or the converts number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i;
	unsigned int j;
	int length;

	if (!b)
		return (0);
	for (length = 0; b[length];)
		length++;
	i = 0;
	j = 1;
	for (length = length - 1; length >= 0; length--)
	{
		if (b[length] == '0' || b[length] == '1')
		{
			i += (b[length] - '0') * j;
			j *= 2;
		}
		else
			return (0);
	}
	return (i);
}
