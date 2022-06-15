#include "main.h"

/**
 * _atoi - delete characters and let only numbers
 * @s: string to work on
 *
 * Return: integer
 */

int _atoi(char *s)
{
	int i;
	int integer = 0;
	int sign = 1;

	for (i = 0; s[i] != '\0' && !(s[i] >= '0' && s[i] <= '9'); i++)
	{
		if (s[i] == '-')
		{
			sign = sign * -1;
		}
	}

	for (i = 0; s[i] != 0; i++)
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			integer = integer * 10 + sign * (s[i] - '0');
		}

		if (integer != 0 && !(s[i] >= '0' && s[i] <= '9'))
		{
			return (integer);
		}
	}
	return (integer);
}
