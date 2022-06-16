#include "main.h"

/**
 * print_number - Prints an integer.
 * @n: The integer to be printed.
 */

void print_number(int n)
{
	unsigned int copy = n;

	if (n < 0)
	{
		_putchar('-');
		copy = -copy;
	}

	if ((copy / 10) > 0)
		print_number(copy / 10);

	_putchar((copy % 10) + '0');
}
