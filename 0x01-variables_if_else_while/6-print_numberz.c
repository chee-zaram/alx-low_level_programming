#include <stdio.h>

/**
 * main - entry point of program
 *
 * Description: prints all single digits of base 10 from 0 using only putchar()
 * Return: returns 0 on success
 */
int main(void)
{
	int i = 0;
	int num_asc = 48;

	while (i >= 0)
	{
		if (i < 10)
		{
			putchar(num_asc); /* ascii */
			i++;
			num_asc++;
		}
		else
			break;
	}
	putchar(10); /* newline ascii */
	return (0);
}

