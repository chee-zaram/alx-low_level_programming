#include "main.h"

/**
 * is_prime_number - Computes if integer input is a prime number.
 * @n: Integer to be checked.
 *
 * Return: Returns 1 if prime, 0 if not.
 */
int is_prime_number(int n)
{
	int p = 2;

	if (n == 0 || n == 1 || n == -1)
		return (0);
	else
		return (check_prime(n, p));
}

/**
 * check_prime - Checks if numbers other 0, 1, -1 is prime.
 * @n: Number to check.
 * @p: Potential factor.
 *
 * Return: 1 if prime, 0 if not.
 */
int check_prime(int n, int p)
{
	if (n % p == 0 && n != p)
		return (0);
	else if (n % p != 0 && (p < n || p > n))
		return (check_prime(n, p + 1));
	else
		return (1);
}

