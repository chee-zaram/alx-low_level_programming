#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point of program.
 * Takes no arguments.
 *
 * Description: To generate random valid passwords for the program 101-crackme.
 * Return: Returns 0 if successful.
 */
int main(void)
{
	int password[100];
	int i, rand_total, n;

	rand_total = 0;
	srand(time(NULL)); /* to generate new numbers each time */

	for (i = 0; i < 100; i++)
	{
		password[i] = rand() % 78;
		rand_total += (password[i] + 48);
		putchar(password[i] + 48);
		if ((2772 - rand_total) - 48 < 78)
		{
			n = 2772 - rand_total - 48;
			putchar(n + 48);
			break;
		}
	}
	return (0);
}

