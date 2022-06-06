#include <stdio.h>

/**
* main - prints all possible combinations of two two-digit numbers
*
* Return: 0 if successful
*/

int main(void)
	{
	int i, d, n, r;

	for (i = 48; i <= 57; i++)
	{
		for (d = 48; d <= 57; d++)
		{
			for (n = 48; n <= 57; n++)
			{
				for (r = 48; r <= 57; r++)
				{
					if (((n + r) > (i + d) &&  i <= n) || n > i)
					{
						putchar(i);
						putchar(d);
						putchar(' ');
						putchar(n);
						putchar(r);

					if (i + d + n + r != 227 || i != 57)
					{
					putchar(',');
					putchar(' ');
					}
					else
					{
					break;
					}
					}
				}
			}
		}
	}
	putchar('\n');

	return (0);
	}

