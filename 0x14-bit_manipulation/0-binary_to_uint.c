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
	unsigned int i = 0;
	unsigned int j = 1;
	int k;

	if (!b)
		return (0);
	for (k = 0; b[k];)
		k++;
	k = k - 1;
	while (k >= 0)
	{
		if (b[k] == '0' || b[k] == '1')
		{
			i += (b[k] - '0') * j;
			j *= 2;
		}
		else
			return (0);
		k--;
	}
	return (i);
}
