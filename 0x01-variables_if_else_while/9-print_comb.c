#include <stdio.h>

/**
 * main - entry point
 *
 * Description: prints 0 to 9 seperated by a comma and space
 * Return: 0 on success.
 */
int main(void)
{
	int i = 48;

	while (i <= 57)
	{
		putchar(i);
		if (i == 57)
			break;
		putchar(44);
		putchar(32);
		i++;
	}
	putchar(10);
	return (0);
}

