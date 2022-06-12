#include "main.h"
#include <stdio.h>

/**
 * main - entry point
 * @num: number to factorise
 *
 * find_max_primefactor - finds and prints the largest
 * prime factor of the number 612852475143, followed by a new line
 *
 * Return: 0 on success
 *
 */

int find_max_primefactor(long int num);

int main(void)
	{
	int res;
	long int num = 612852475143;

	res = find_max_primefactor(num);
	printf("%d\n", res);

	return (0);
	}


/**
 * find_max_primefactor - finds and prints the largest
 *@num: number to factorise
 *
 * Return: max
 */

int find_max_primefactor(long int num)
	{
	int i, n;
	int index = 0;
	int prime_factors[100];
	int max;

	/*finding and creating array of prime factors*/
	for (i = 2; num > 1; i++)
	{
		while (num % i == 0)
		{
			prime_factors[index] = i;
			index++;
			num = num / i;
		}
	}


	/*finding the maximum prime factor from array*/
	max = prime_factors[0];

	for (n = 0; n < index; n++)
	{
		if (max < prime_factors[n])
		{
			max = prime_factors[n];
		}
	}

	return (max);
	}
