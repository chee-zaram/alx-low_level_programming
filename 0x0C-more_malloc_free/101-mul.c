#include "main.h"

/**
 * main - Entry point of program.
 * @argc: Arguments count.
 * @argv: Array of strings of each argument.
 *
 * Description: Multiplies two numbers given as commandline arguments.
 * Return: Returns 0 if successful.
 */
int main(int argc, char **argv)
{
	char *str1, *str2;
	int len1, len2, tot_len, i, c_o, digit1, digit2, *result, a = 0;

	str1 = argv[1], str2 = argv[2];
	if (argc != 3 || check_non_digit(str1) == 0 || check_non_digit(str2) == 0)
		ErrorMsg();
	len1 = strlen(str1);
	len2 = strlen(str2);
	tot_len = len1 + len2 + 1;
	result = malloc(sizeof(int) * tot_len);
	if (result == NULL)
		return (1);
	for (i = 0; i <= len1 + len2; i++)
		result[i] = 0;
	for (len1 = len1 - 1; len1 >= 0; len1--)
	{
		digit1 = str1[len1] - 48;
		c_o = 0;
		for (len2 = len2 - 1; len2 >= 0; len2--)
		{
			digit2 = str2[len2] - 48;
			c_o += result[len1 + len2 + 1] + (digit1 * digit2);
			result[len1 + len2 + 1] = c_o % 10;
			c_o /= 10;
		}
		if (c_o > 0)
			result[len1 + len2 + 1] += c_o;
	}
	for (i = 0; i < tot_len - 1; i++)
	{
		if (result[i])
			a = 1;
		if (a)
			_putchar(result[i] + 48);
	}
	if (a == 0)
		_putchar(48);
	_putchar('\n');
	free(result);
	return (0);
}

/**
 * check_non_digit - Loops through a string and checks for a non-digit.
 * @str: Pointer to string to be checked.
 *
 * Return: Returns 0 if non-digit found, 1 if not.
 */
int check_non_digit(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
	{
		if (str[i] < 48 || str[i] > 57)
			return (0);
	}
	return (1);
}

/**
 * _print_str - Prints a string.
 * @str: Pointer to strings to be printed.
 * @len: Length of the string.
 *
 * Return: No specified return value.
 */
void _print_str(char *str, unsigned int len)
{
	unsigned int i;

	for (i = 0; i < len; i++)
		_putchar(str[i]);
}

/**
 * ErrorMsg - Prints an error message and stops program with exit code.
 */
void ErrorMsg(void)
{
	_print_str("Error", _strlen("Error"));
	_putchar('\n');
	exit(98);
}

/**
 * _putchar - Prints a character.
 * @c: Character to be printed.
 *
 * Return: Returns 1 on success, -1 on error.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

