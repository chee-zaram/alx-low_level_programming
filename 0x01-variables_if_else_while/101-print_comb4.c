#include <stdio.h>

/**
 * main - entry point
 *
 * Description: prints all possible different combinations of three digits.
 * Numbers seperated by comma and space,
 * three digits being different,
 * combination only appearing once in form of the smallest number,
 * using only putchar function, max of 6 times,
 * no use of char data type.
 * Return: value of 0 on success.
 */
int main(void)
{
	int digit1, digit2, digit3;

	digit1 = 48;
	while (digit1 <= 55)
	{
		digit2 = digit1 + 1;
		while (digit2 <= 56)
		{
			digit3 = digit2 + 1;
			while (digit3 <= 57)
			{
				putchar(digit1);
				putchar(digit2);
				putchar(digit3);
				if (digit1 == 55 && digit2 == 56 && digit3 == 57)
					break;
				putchar(44);
				putchar(32);
				digit3++;
			}
			digit2++;
		}
		digit1++;
	}
	putchar(10);
	return (0);
}

