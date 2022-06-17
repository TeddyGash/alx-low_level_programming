#include <stdio.h>

/**
 * main - computes and prints the sum of
 * all the multiples of 3 or 5 below 1024
 *
 * Return: 0 on success
 */

int main(void)
{
	int n = 1024;
	int sum = 0;
	int i;

	for (i = 1; i < n; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum += i;
		}
	}
	printf("%d\n", sum);

	return (0);
}
