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
	int num1, num2, num3;

	for (num1 = 48; num1 < 56; num1++) /**
					    * Incrementing num1 by 1 starting from 0.
					    * Using ascii values.
					    */
	{
		for (num2 = num1 + 1; num2 < 57; num2++) /**
							  * Initializing num2 as num1+1...
							  * for each iteration of outermost loop.
							  * Incrementing num2 by 1 starting from 1.
							  */

		{
			for (num3 = num2 + 1; num3 <= 57; num3++) /**
								   * Initializing num3 as num2+1...
								   * for each iteration of outer loop.
								   * Incrementing num3 by 1 starting from 3.
								   */
			{
				putchar(num1);
				putchar(num2);
				putchar(num3);
				if (num1 == 55 && num2 == 56 && num3 == 57)
					continue;
				putchar(44);
				putchar(32);
			}
		}
	}
	putchar(10);
	return (0);
}

