#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 *@n: integer to check
 *
 * Return: 0 on success
 *
 */

int _abs(int n)
	{
	int abs;

	if (n < 0)
	{
		abs = n * -1;
		return (abs);
	}
	else
	{
		return (n);
	}

	return (0);
	}
