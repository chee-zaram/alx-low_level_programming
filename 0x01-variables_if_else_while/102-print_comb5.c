#include <stdio.h>

/**
 * main - entry point of program.
 *
 * Description: Prints all possible combinations of two two-digit numbers.
 * Return: value of 0 on success.
 */
int main(void)
{
	int num1, num2;

	num1 = 0;

	while (num1 < 99)
	{
		num2 = num1 + 1;
		while (num2 < 100)
		{
			if (num1 < num2)
			{
				putchar((num1 / 10) + 48);
				putchar((num1 % 10) + 48);
				putchar(32);
				putchar((num2 / 10) + 48);
				putchar((num2 % 10) + 48);
				if (num1 != 98 || num2 != 99)
				{
					putchar(44);
					putchar(32);
				}
			}
			num2++;
		}
		num1++;
	}
	putchar(10);
	return (0);
}

