#include <stdio.h>
#include "main.h"
/**
 * rot13 - function that encode
 * @s: string to encode
 *
 * Description: function that encodes a string using.
 *
 * Return: encoded string
 */
char *rot13(char *s)
{
	int counter1;
	int counter2;
	char normal[] = {'a', 'A', 'b', 'B', 'c', 'C', 'd', 'D', 'e', 'E', 'f',
		'F', 'g', 'G', 'h', 'H', 'i', 'I', 'j', 'J', 'k', 'K', 'l', 'L', 'm', 'M',
		'n', 'N', 'o', 'O', 'p', 'P', 'q', 'Q', 'r', 'R', 's', 'S', 't', 'T', 'u',
		'U', 'v', 'V', 'w', 'W', 'x', 'X', 'y', 'Y', 'z', 'Z'};
	char invert[] = {'n', 'N', 'o', 'O', 'p', 'P', 'q', 'Q', 'r',
		'R', 's', 'S', 't', 'T', 'u', 'U', 'v', 'V', 'w', 'W', 'x',
		'X', 'y', 'Y', 'z', 'Z', 'a', 'A', 'b', 'B', 'c', 'C', 'd', 'D',
		'e', 'E', 'f', 'F', 'g', 'G', 'h', 'H', 'i', 'I', 'j', 'J',
		'k', 'K', 'l', 'L', 'm', 'M'};

	for (counter1 = 0; s[counter1] != '\0'; counter1++)
	{
		char tested_char;

		tested_char = s[counter1];
		for (counter2 = 0; counter2 < 52; counter2++)
		{
			if (tested_char == normal[counter2])
				s[counter1] = invert[counter2];
		}
	}
	return (s);
}
