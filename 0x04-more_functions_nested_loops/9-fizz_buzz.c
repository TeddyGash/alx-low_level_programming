#include "main.h"
#include <stdio.h>

/**
 * main - entry point
 *
 * fizz_buzz: fizz_buzz test
 *
 * Return: 0 on success
 */

int main(void)
	{

	fizz_buzz();

	return (0);
	}

/**
 * fizz_buzz - fizz_buzz test
 *
 *
 */
void fizz_buzz(void)
	{
	int i;

	for (i = 1; i <= 100; i++)
		{
		if (i % 5 == 0 && i % 3 == 0)
			{
		printf("FizzBuzz");
			}
		if (i % 3 == 0)
			{
			printf("Fizz");
			}
		else if (i % 5 == 0)
			{
			printf("Buzz");
			}
		else
			{
			printf("%d", i);
			}
		if (i < 100)
			printf(" ");
		}
	printf("\n");
	}
