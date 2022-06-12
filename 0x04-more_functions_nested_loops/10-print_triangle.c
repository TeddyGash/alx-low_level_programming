#include "main.h"

/**
 * print_triangle - prints a triangle, followed by a new line.
 *@size: size of triangle
 *
 */

void print_triangle(int size)
	{
	int i, n, d;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			for (n = 1; n <= size - i; n++)
			{
				_putchar(' ');
			}
			for (d = 1; d <= i; d++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
	}
