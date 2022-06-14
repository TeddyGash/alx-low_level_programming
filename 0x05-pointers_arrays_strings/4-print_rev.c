#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_rev - prints a string, in reverse, followed by a new line
 * @s: str to reverse and print
 *
 */

void print_rev(char *s)
{
	int l = strlen(s);
	int i;
	int n = l - 1;
	char rev[1000];
	char c;
	int r;

	for (i = 0; i < l; i++)
	{
		rev[i] = s[n];
		n--;
	}
	for (r = 0; r <= n; r++)
		{
		c = rev[r];
		_putchar(c);
		}
	_putchar('\n');
}
