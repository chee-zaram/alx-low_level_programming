#include <stdio.h>

/**
 * main - entry point of program
 *
 * Description: prints single-digit numbers seperated by space and comma,
 * and end in a newline.
 * Return: 0 on success.
 */
int main(void)
{
	int i = 48;

	while (i >= 48 && i <= 57)
	{
		putchar(i);
		if (i == 57)
			break;
		putchar(44); /* ascii comma */
		putchar(32); /* ascii space */
		i++;
	}
	putchar(10);
	return (0);
}

