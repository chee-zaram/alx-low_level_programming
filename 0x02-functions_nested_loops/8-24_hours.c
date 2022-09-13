#include "main.h"

/**
 * jack_bauer - Prints every minute of the day of Jack Bauer.
 * Takes no argument values.
 *
 * Return: no return value specified.
 */
void jack_bauer(void)
{
	int min_r = 0;
	int min_l = 0;
	int hour_r = 0;
	int hour_l = 0;

	while (1)
	{
		if (min_r > 9)
		{
			min_r = 0;
			min_l++;
		}
		if (min_l > 5)
		{
			min_l = 0;
			hour_r++;
		}
		if (hour_r > 9)
		{
			hour_r = 0;
			hour_l++;
		}
		if (hour_l == 2 && hour_r == 4)
			break;
		_putchar(hour_l + 48);
		_putchar(hour_r + 48);
		_putchar(':');
		_putchar(min_l + 48);
		_putchar(min_r + 48);
		_putchar(10);
		min_r++;
	}
}

