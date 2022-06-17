#include <stdio.h>

/**
 * main - finds and prints the sum of the even-valued
 * fibonacci numbers below 4000000 followed by a new line.
 *
 * Return: 0 on success
 */

int main(void)
{
	int i;
	unsigned long num1 = 0;
	unsigned long num2 = 1;
	unsigned long sum = 0;
	unsigned long sum_even = 0;

	for (i = 1; sum <= 4000000; i++)
	{
		sum = num1 + num2;
		num1 = num2;
		num2 = sum;
		if (sum % 2 == 0)
		{
			sum_even += sum;
		}
	}
	printf("%lu\n", sum_even);

	return (0);
}
