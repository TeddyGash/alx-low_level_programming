#include "main.h"
#include <ctype.h>

/**
 * _islower - checks for lowercase character
 *@c: character to check
 *
 * Return: 1 on success
 *
 */

int _islower(int c)
	{

	if (islower(c))
		return (1);
	else
		return (0);
	}
