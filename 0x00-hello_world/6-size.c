#include <stdio.h>

/**
 * main - program starts and ends in this function
 * takes no arguments
 *
 * Description: determine the size of various data types on a computer
 * Return: returns 0
 */
int main(void)
{
	printf("Size of a char: %d byte(s)\n", sizeof(char));
	printf("Size of an int: %d bytes(s)\n", sizeof(int));
	printf("Size of a long int: %d bytes(s)\n", sizeof(long int));
	printf("Size of a long long int: %d byte(s)\n", sizeof(long long int));
	printf("Size of a float: %d byte(s)\n", sizeof(float));

	return (0);
}

