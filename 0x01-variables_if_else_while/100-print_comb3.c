#include <stdio.h>

/**
 * main - entry point
 *
 * Description: prints all possible combinations of 2 digits,
 * seperated by comma and space,
 * with the 2 digits being different,
 * and the first digit in the combo less than the second,
 * all number printed in ascending order,
 * using only putchar function max of 5 times.
 * Return: value of 0 on success.
 */
int main(void)
{
	int d1, d2;

	for (d1 = 48; d1 < 57; d1++)
	{
		for (d2 = d1 + 1; d2 <= 57; d2++)
		{
			putchar(d1);
			putchar(d2);
			if (d1 == 56 && d2 == 57)
				continue;
			putchar(44);
			putchar(32);
		}
	}
	putchar(10);
	return (0);
}

