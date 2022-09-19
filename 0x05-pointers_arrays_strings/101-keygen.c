#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - program that generates random password
 *
 * Description: program that generates random valid passwords
 * for the program 101-crackme.
 *
 * Return: return always 0
 */
int main(void)
{
	int i;
	int j;
	int k;
	int s;
	char range[];
	char password[60];

	i = 0;
	k = 0;
	s = 0;
	range[] = "0123456789abcdefghijklmnopkrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	srand(time(NULL));
	while (s != 2850)
	{
		while ((2850 - 122) > s)
		{
			j = rand() % 62;
			password[i] = range[j];
			s = s + range[k];
			i++;
		}
		while (range[k])
		{
			if (c[k] == (2850 - s))
			{
				password[i] = range[k];
				s = s + range[k];
				i++;
				break;
			}
			k++;
		}
	}
	password[i] = '\0';
	printf("%s", password);
	return (0);
}
