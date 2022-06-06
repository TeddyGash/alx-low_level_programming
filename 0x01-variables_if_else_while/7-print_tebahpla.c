#include <stdio.h>

/**
* main - prints alphabets in esrever
*
* Return: 0 if successful
*/

int main(void)
	{
	char c;

	c = 'z';
	while (c >= 'a')
		{
		putchar(c);
		c--;
		}
	putchar('\n');

	return (0);
	}
