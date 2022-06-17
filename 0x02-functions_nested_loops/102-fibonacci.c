#include <stdio.h>

/**
 * main - print the first 50 fibonacci numbers starting with 1 or 2
 *
 * Return: 0 on success
 */

int main(void)
{
	int i;
	unsigned long num1 = 0;
	unsigned long num2 = 1;
	unsigned long sum;

	for (i = 1; i <= 50; i++)
	{
		sum = num1 + num2;
		num1 = num2;
		num2 = sum;
		if (i != 50)
		{
			printf("%lu, ", sum);
		}
		else
		{
			printf("%lu\n", sum);
		}
	}

	return (0);
}
