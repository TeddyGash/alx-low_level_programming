#include <stdio.h>

/**
* main - prints all possible different combinations of three digits
*
* Return: 0 if successful
*/

int main(void)
	{
	int i, d, n;

	for (i = '0'; i <= '9'; i++)
		{
		for (d = '0'; d <= '9'; d++)
			{
			for (n = '0'; n <= '9'; n++)
				{
				if (i < d && d < n)
					{
					putchar(i);
					putchar(d);
					putchar(n);
					if ((i != '7') || (d != '8') || (n != '9'))
						{
						putchar(',');
						putchar(' ');
						}
					}
				}
			}
		}
	putchar('\n');

	return (0);
	}
