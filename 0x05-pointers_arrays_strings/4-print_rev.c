#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line
 * @s: str to reverse and print
 *
 */

void print_rev(char *s)
{
	int index;

	index = 0;

	while (s[index] != '\0')
	{
		index++;
	}

	for (index = index - 1; index >= 0; index--)
	{
		_putchar(s[index]);
	}
	_putchar('\n');
}
