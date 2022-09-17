/**
 * Originally written as part of a task from ALX-SE programme.
 * Optimized it, and rectified a bug that failed to detect when invalid days
 * are passed.
 */

#include <stdio.h>
#include "main.h"

/**
* print_remaining_days - takes a date and prints how many days are
* left in the year, taking leap years into account
* @month: month in number format
* @day: day of month
* @year: year
* Return: void
*/

void print_remaining_days(int month, int day, int year)
{
	if (year % 4 == 0)
	{
		if (month > 2 || month < 2)
		{
			day++;
		}
		if (month == 1 && day > 31 ||
				month == 2 && day > 60 ||
				month == 3 && day > 91 ||
				month == 4 && day > 121 ||
				month == 5 && day > 152 ||
				month == 6 && day > 182 ||
				month == 7 && day > 213 ||
				month == 8 && day > 244 ||
				month == 9 && day > 274 ||
				month == 10 && day > 305 ||
				month == 11 && day > 335 ||
				month == 12 && day > 366)
		{
			printf("Invalid date. Day out of range.\n");
		}
		else
		{
			printf("Day of the year: %d\n", day);
			printf("Remaining days: %d\n", 366 - day);
		}
	}
	else
	{
		if (month == 2 && day == 60)
		{
			printf("Invalid date: %02d/%02d/%04d\n", month, day - 31, year);
		}
		else
		{
			if (month == 1 && day > 31 ||
				month == 2 && day > 59 ||
				month == 3 && day > 90 ||
				month == 4 && day > 120 ||
				month == 5 && day > 151 ||
				month == 6 && day > 181 ||
				month == 7 && day > 212 ||
				month == 8 && day > 243 ||
				month == 9 && day > 273 ||
				month == 10 && day > 304 ||
				month == 11 && day > 334 ||
				month == 12 && day > 365)
			{
				printf("Invalid date. Day out of range.\n");
			}
			else
			{
				printf("Day of the year: %d\n", day);
				printf("Remaining days: %d\n", 365 - day);
			}
		}
	}
}

