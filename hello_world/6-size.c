#include <stdio.h>

/**
 * main - prints the size of multiple data types
 *
 * Return: 0 (Success)
 */

int main(void)
{
	printf("Size of a char: %lu bytes(s)\n", sizeof(char));
	printf("Size of an int: %lu bytes(s)\n", sizeof(int));
	printf("Size of a long int: %lu bytes(s)\n", sizeof(long int));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(long long int));
	printf("Size of a float: %lu byte(s)\n", sizeof(float));
	fprintf(stderr, "[Anything]\n");
	return (0);
}
