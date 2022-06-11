#include "main.h"

/**
 *print_square - prints a square, followed by a new line
 *@size: size of square
 *
 *
 */

void print_square(int size)
	{
	int i, n;

	if (size > 0)
	{
	/*loop for height of square*/
	for (i = 0; i < size; i++)
		{
		/*loop for width of square*/
		for (n = 0; n < size; n++)
			{
			_putchar('#');
			}
		_putchar('\n');
		}
	}
	else
		_putchar('\n');
	}
