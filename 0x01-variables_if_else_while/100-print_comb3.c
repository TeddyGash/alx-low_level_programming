#include <stdio.h>

/**
* main - prints all possible different combinations of two digits
*
* Return: 0 if successful
*/

int main(void)
	{
	int i;
	int n;

	for (i = '0'; i <= '9'; i++)
		{
		for (n = '0'; n <= '9'; n++)
			{
			if (i < n)
				{
				putchar(i);
				putchar(n);
				if (i != '8' || n != '9')
					{
					putchar(',');
					putchar(' ');
					}
				}
			}
		}
	putchar('\n');

	return (0);
	}
