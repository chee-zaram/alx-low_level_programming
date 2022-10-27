#include "main.h"

/**
 * get_endianness - Gets the endianness on a machine.
 *
 * Return: 1 if little endian, 0 otherwise.
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *end = (char *)&i;

	if ((int *)end)
		return (1);
	return (0);
}

