#include "main.h"

/**
 * main - Entry point of program.
 * @argc: Number of arguments passed to main() including program name.
 * @argv: Pointer to string arguments.
 *
 * Description: Prints minimum number of coins to make change for an amount.
 * Amount is in cents.
 * Return: Returns 0 if successful, 1 if negative number is passed
 * or if more than 1 argument is passed.
 */
int main(int argc, char **argv)
{
	int cents, change;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);
	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	change = change_cent(cents);
	printf("%d\n", change);
	return (0);
}

/**
 * change_cents - Calculates minimum number of coins to make change for amount.
 * @cents: Amount in cents.
 *
 * Return: Minimum number of coins.
 */
int change_cents(int cents)
{
	int ch25, ch10, ch5, ch2, ch1;

	ch25 = cents / 25;
	cents = cents - (ch25 * 25);

	ch10 = cents / 10;
	cents = cents - (ch10 * 10);

	ch5 = cents / 5;
	cents = cents - (ch5 * 5);

	ch2 = cents / 2;
	cents = cents - (ch2 * 2);

	ch1 = cents;

	return (ch25 + ch10 + ch5 + ch2 + ch1);
}

