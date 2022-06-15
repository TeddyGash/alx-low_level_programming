#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random valid passwords for the program 101-crackme.
 *
 * Return: 0 on success.
 */

int main(void)
{
	int add;
	char c;

	srand(time(NULL));

	while (add <= 2645)
	{
		c = rand() % 128;
		add = add + c;
		_putchar(c);
	}

	_putchar(2772 - add);

	return (0);
}
