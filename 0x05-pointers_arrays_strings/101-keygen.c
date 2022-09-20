#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

/**
 * main - Entry point of program.
 * Takes no arguments.
 *
 * Description: Generates a valid random password.
 * Return: 0 if successful.
 */
int main(void)
{
	int i, random = 0;
	char upper[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char lower[] = "abcdefghijklmnopqrstuvwxyz";
	char nums[] = "0123456789";
	char passwrd[100]; /* length of password */

	srand((unsigned int)(time(NULL))); /* to generate new numbers each time */
	random = rand() % 3;

	for (i = 0; i < 100; i++)
	{
		if (random == 1)
		{
			passwrd[i] = nums[rand() % 10]; /* pick randomly from 10 nums */
			random = rand() % 3;
			printf("%c", passwrd[i]);
		}
		else if (random == 2)
		{
			passwrd[i] = upper[rand() % 26]; /* pick randomly from 26 capital letters */
			random = rand() % 3;
			printf("%c", passwrd[i]);
		}
		else
		{
			passwrd[i] = lower[rand() % 26]; /* pick randomly from 26 small letters */
			random = rand() % 3;
			printf("%c", passwrd[i]);
		}
	}
	return (0);
}

