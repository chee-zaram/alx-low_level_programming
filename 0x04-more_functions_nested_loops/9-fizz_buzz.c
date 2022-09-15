#include <stdio.h>

/**
 * main - Entry point of program.
 * Takes no argument.
 *
 * Description: Prints the numbers from 1 to 100, followed by a newline.
 * But for multiples of 3, print "Fizz" in place of the number,
 * and for multiples of 5 print "Buzz",
 * and for multiples of both 3 and 5, print "FizzBuzz".
 * Return: 0 if successful.
 */
int main(void)
{
	int x;

	x = 1;
	while (x <= 100)
	{
		if (x == 100)
			printf("Buzz");
		else if (x % 3 == 0 && (x % 3 != x % 5))
			printf("Fizz ");
		else if (x % 5 == 0 && (x % 5 != x % 3))
			printf("Buzz ");
		else if (x % 3 == 0 && x % 5 == 0)
			printf("FizzBuzz ");
		else
			printf("%d ", x);
		x++;
	}
	putchar(10);
	return (0);
}

