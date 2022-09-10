#include <stdio.h>

/**
 * main - entry
 *
 * Description: nill
 * Return: 0
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

