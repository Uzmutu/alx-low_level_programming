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
	char range[] = "0123456789abcdefghijklmnopkrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char password[58];

	i = 0;
	k = 0;
	s = 0;
	srand(time(NULL));
	while (s != 2772)
	{
		while ((2772 - 122) > s)
		{
			j = rand() % 62;
			password[i] = range[j];
			s = s + range[k];
			i++;
		}
		while (range[k])
		{
			if (range[k] == (2772 - s))
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
