#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - entry point
 * return 0 (Success)
 */

int main(void)
{
	int n;
	float u = n % 10;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if(u > 5)
	{
		printf("Last digit of %d is %f and is greater than 5\n", n, u);
	}
	else if(u == 0)
	{
		printf("Last digit of %d is %f and is 0\n", n, u);
	}
	else(u < 6)
	{
		printf("Last digit of %d is %f and is less than 6 and not 0\n", n, u);
	}
		return (0);
	}
