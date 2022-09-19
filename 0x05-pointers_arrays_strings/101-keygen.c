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
	int N;
	int randomizer;
	char numbers[];
        char letter[];
        char LETTER[];
        char symbols[];
        char password[];

	i = 0;
	N = 20;
	randomizer = 0;
	srand((unsigned int)(time(NULL)));
	numbers[] = "0123456789";
	letter[] = "abcdefghijklmnoqprstuvwyzx";
	LETTER[] = "ABCDEFGHIJKLMNOQPRSTUYWVZX";
	symbols[] = "!@#$^&*?";
	password[N];
	randomizer = rand() % 4;
	for (i = 0; i < N; i++) 
	{
		if (randomizer == 1)
		{
			password[i] = numbers[rand() % 10];
			randomizer = rand() % 4;
			printf("%c", password[i]);
		}
		else if (randomizer == 2)
		{
			password[i] = symbols[rand() % 8];
			randomizer = rand() % 4;
			printf("%c", password[i]);
		}
		else if (randomizer == 3)
		{
			password[i] = LETTER[rand() % 26];
			randomizer = rand() % 4;
			printf("%c", password[i]);
		}
		else
		{
			password[i] = letter[rand() % 26];
			randomizer = rand() % 4;
			printf("%c", password[i]);
		}
	}
	return (0);
}
