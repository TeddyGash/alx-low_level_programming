#include "main.h"
#include <ctype.h>

/**
 * _isdigit - checks for a digit (0 through 9)
 *@c: character to check
 *
 * Return: 1 on success
 *
 */

int _isdigit(int c)
	{

	if (isdigit(c))
		return (1);
	else
		return (0);
	}
