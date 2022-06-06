#include <stdio.h>

/**
* main - prints prints all the numbers of base 16 in lowercase,
* followed by a new line
*
* Return: 0 if successful
*/

int main(void)
	{
	int n;
	char c;

	for (n = '0'; n <= '9'; n++)
		{
		putchar(n);
		}
	c = 'a';
	while (c <= 'f')
		{
		putchar(c);
		c++;
		}
	putchar('\n');

	return (0);
	}
