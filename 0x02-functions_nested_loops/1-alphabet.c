#include "main.h"

/**
 * print_alphabet - prints alphabets in lowercase followed by newline
 *@c: character to print
 *
 * Return: 0 on success
 */


int print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');

	return (0);
}
