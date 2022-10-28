#include "main.h"
/**
 * get_bit - Gets the value of a bit at a given index.
 * @n: The bit.
 * @index: The index to get the value at - indices start at 0.
 *
 * Return: the value of the bit at index index or -1 if an error occured.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int i;

	i = sizeof(unsigned long int) * 8;
	if (!(n & (1 << index)))
		return (0);
	if (index >= i)
		return (-1);
	return (1);
}
