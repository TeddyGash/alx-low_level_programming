#include <stdlib.h>
#include <time.h>
#include <stdlib.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */

/**
 * main - checks if random numbers are positive or negative.
 *
 * Return: 0 if successful
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
		{
		printf("%n is positive\n", n);
		}
	else if (n == 0)
		{
		printf("%n is zero\n", n);
		}
	else if (n < 0)
		{
		printf("%n is negative\n", n);
		}

	return (0);
}