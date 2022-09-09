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
	int num1, num2;

	for (num1 = 48; num1 < 57; num1++) /**
					    * Incrementing num1 by 1 starting from 0.
					    * Using ascii values.
					    */
	{
		for (num2 = num1 + 1; num2 <= 57; num2++) /**
							   * Initializing num2 as num1+1...
							   * for each iteration of outer loop.
							   * Incrementing num2 by 1 starting from 1.
							   */
		{
			putchar(num1);
			putchar(num2);
			if (num1 == 56 && num2 == 57)
				continue;
			putchar(44);
			putchar(32);
		}
	}
	putchar(10);
	return (0);
}

