#include "main.h"
#include <string.h>

/**
 * main - prints "_putchar" using _putchar fxn
 * @c: character to print
 *
 * Return: 0 on success
 */

int _putchar(char c);

int main(void)
	{
	int i;
	char c;
	char s[] = "_putchar";

	for (i = 0; i <= 7; i++)
		{
		c = s[i];
		_putchar(c);
		}
	_putchar('\n');

	return (0);
}
