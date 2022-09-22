#include <stdio.h>
#include  "main.h"
/**
 * *leet - function that encode
 * @s: string to encode
 *
 * Description: function that encodes a string into 1337
 *
 * Return: encoded string
 */
char *leet(char *s)
{
	char two_dimension[5][2] = {{'a', 'A'}, {'e', 'E'}, {'o', 'O'},
				 {'t', 'T'}, {'l', 'L'}};

	char number[] = {'4', '3', '0', '7', '1'};

	int i;
	int j;

	i = 0;
	while (s[i] != 0)
	{
		for (j = 0; j < 5; j++)
		{
			if (s[i] == two_dimension[j][0] || s[i] == two_dimension[j][1])
			{
				s[i] = number[j];
				break;
			}
		}

		i++;
	}
	return (s);
}
