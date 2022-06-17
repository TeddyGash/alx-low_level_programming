#include "main.h"
/**
 * print_times_table - prints the n times table, starting with 0.
 * @n: number to print table for.
 *
 */
void print_times_table(int n)
{
	int x, y, product;

	if (n < 0 || n > 15)
		return;

	for (x = 0; x <= n; x++)
	{
		for (y = 0; y <= n; y++)
		{
			product = (x * y);
			if (y != 0)
			{
				_putchar(',');
				_putchar(' ');
			}
			if ((product < 10) && (y != 0))
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(product + '0');
			}
			else if ((product >= 10) && (product < 100))
			{
				_putchar(' ');
				_putchar((product / 10) + '0');
				_putchar((product % 10) + '0');
			}
			else if ((product >= 100) && (y != 0))
			{
				_putchar((product / 100) + '0');
				_putchar(((product / 10) % 10) + '0');
				_putchar((product % 10) + '0');
			}
			else
				_putchar((product % 10) + '0');
		}
		_putchar('\n');
	}
}
