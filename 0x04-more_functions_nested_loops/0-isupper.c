#include "main.h"
#include <ctype.h>

/**
 * _isupper - checks for uppercase character
 *@c: character to check
 *
 * Return: 1 on success
 *
 */

int _isupper(int c)
	{

	if (isupper(c))
		return (1);
	else
		return (0);
	}
