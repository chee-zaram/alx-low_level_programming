#include <unistd.h>
#include "main.h"

/**
 * main - Entry point.
 * Takes no argument values.
 *
 * Return: 0 if successful
 */
int main(void)
{
	print_alphabet();
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

/**
 * print_alphabet - Prints lowercase alphabet
 * Takes no argument values.
 *
 * Return: 1 on success.
 */
void print_alphabet(void)
{
	int ch = 97;
	
	while (ch <= 122)
	{
		_putchar(ch);
		ch++;
	}
	_putchar(10);
}

