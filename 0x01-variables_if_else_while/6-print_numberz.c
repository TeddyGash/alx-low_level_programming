#include <stdio.h>

/**
* main - prints integers from 0-9
*
* Return: 0 if successful
*/

int main(void)
	{
	int n;

	n = '0';
	while (n <= '9')
		{
		putchar(n);
		n++;
		}
	putchar('\n');
	return (0);
	}
