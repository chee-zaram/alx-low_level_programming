#include <unistd.h>
#include "main.h"

/**
 * main - Entry point.
 * Takes no arguments.
 *
 * Description: prints a string followed by a newline using _putchar function
 * Return: 0 if successful.
 */
int main(void)
{
	_putchar(95);
	_putchar(112);
	_putchar(117);
	_putchar(116);
	_putchar(99);
	_putchar(104);
	_putchar(97);
	_putchar(114);
	_putchar(10);
	return (0);
}

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

