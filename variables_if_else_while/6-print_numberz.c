#include <stdio.h>
/**
 * main - entry point
 * Return: always 0 (Success)
 */

int main(void)
{
	int c = 0;

	while (c <= 9)
	{
		putchar (c);
		c++;
	}

	putchar ('\n');
	return (0);
}
