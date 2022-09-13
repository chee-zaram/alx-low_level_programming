#include "main.h"

/**
 * print_times_table - Prints the n times table, from 0.
 * @n: Integer
 *
 * Return: no return value.
 */
void print_times_table(int n)
{
	int x, y, z;
	int z_lp, z_r, z_m, z_l;

	if (n >= 0 && n <= 15)
	{
		for (x = 0; x <= n; x++)
		{
			for (y = 0; y <= n; y++)
			{
				z = x * y, z_lp = (z / 10), z_r = (z % 10);
				z_m = (z_lp % 10), z_l = (z_lp / 10);
				if (y == 0)
					_putchar(z + 48);
				if (z < 10 && y != 0)
				{
					_putchar(44);
					_putchar(32);
					_putchar(32);
					_putchar(32);
					_putchar(z + 48);
				} else if (z >= 10 && z < 100)
				{
					_putchar(44);
					_putchar(32);
					_putchar(32);
					_putchar((z / 10) + 48);
					_putchar((z % 10) + 48);
				} else if (z >= 100)
				{
					_putchar(44);
					_putchar(32);
					_putchar(z_l + 48);
					_putchar(z_m + 48);
					_putchar(z_r + 48);
				}
			}
			_putchar(10);
		}
	}
}

