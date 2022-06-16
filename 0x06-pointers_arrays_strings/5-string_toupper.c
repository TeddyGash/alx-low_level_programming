#include "main.h"

/**
 * string_toupper - change all lowercase to uppercase
 * @n: str to work on
 *
 * Return: char
 */

char *string_toupper(char *n)
{
	int i;

	i = 0;
	for (i = 0; n[i] != '\0'; i++)
	{
		if (n[i] >= 'a' && n[i] <= 'z')
		{
			n[i] = n[i] - 32;
		}
	}

	return (n);
}
