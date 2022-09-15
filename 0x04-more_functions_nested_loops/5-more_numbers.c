#include "main.h"

/**
 * more_numbers - Prints 10 times the numbers, from 0 to 14.
 * Takes no arguments.
 *
 * Return: No specified return value.
 */
void more_numbers(void)
{
	int i, more_num;

	i = 1;
	while (i <= 10)
	{
		more_num = 0;
		while (more_num <= 14)
		{
			if (more_num >= 10)
				_putchar((more_num / 10) + 48);
			_putchar((more_num % 10) + 48);
			more_num++;
		}
		i++;
		_putchar(10);
	}
}

