#include <stdio.h>

/**
 * main - entry point
 * Return: always 0 (Success)
 */

int main(void)
{
	char c = 'z';
	
	while (c >= 'a')
	{
		putchar (c);
		c = c - 1;
	}
	putchar ('\n');
	return (0);
}
