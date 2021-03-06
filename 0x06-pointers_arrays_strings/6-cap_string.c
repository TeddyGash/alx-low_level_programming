#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @n: str to work on
 *
 *
 * Return: capitalised str
 */

char *cap_string(char *n)
{
	int i = 0;

	/*Capitalise first word*/
	if (n[0] >= 'a' && n[0] <= 'z')
	{
		n[0] = n[0] - 32;
	}

	/*Capitalise words after ff separators*/
	for (i = 1; n[i] != '\0'; i++)
	{
		switch (n[i])
		{
			case ',':
			case ';':
			case '.':
			case '!':
			case '?':
			case '"':
			case '(':
			case ')':
			case '{':
			case '}':
			case ' ':
			case '\n':
			case '\t':
				if (n[i + 1] >= 'a' && n[i + 1] <= 'z')
				{
					n[i + 1] = n[i + 1] - 32;
				}
		}
	}

	return (n);
}
