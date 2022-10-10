#include <stdio.h>

/**
 * main - Entry point of program.
 *
 * Description: Prints out filename from which the source code was compiled.
 * Return: Returns 0 on success.
 */
int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
