#include "main.h"

/**
* print_diagonal - draws a diagonal line on the terminal.
*
* @n: numbers of backslahes to print.
*
* Return: void.
*/

void print_diagonal(int n)
{
	int i;
	int c;

	/* loop for backslash*/
	for (i = 1; i <= n; i++)
		{
		if (n > 1)
			{
			/* loop for spaces */
			for (c = 1; c < i; c++)
				{
				_putchar(' ');
				}
			}
			_putchar('\\');
			_putchar('\n');
		}
	_putchar('\n');
}
