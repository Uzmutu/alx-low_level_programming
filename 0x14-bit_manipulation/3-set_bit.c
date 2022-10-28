/**
 * set_bit - Sets the value of a bit at a given index to 1.
 * @n: A pointer to the bit.
 * @index: The index to set the value at - indices start at 0.
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i = sizeof(unsigned long int) * 8;

	if (index < i)
		*n ^= (1 << index);
	else
		return (-1);
	return (1);

}
