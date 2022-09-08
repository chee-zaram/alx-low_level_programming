#include <unistd.h>
/**
 * main - program starts and ends here
 * takes two arguments
 *
 * Description: prints a string to the stderr stream
 * Return: return value is 1
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}

