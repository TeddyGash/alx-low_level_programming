#include "main.h"

/**
 * leet - encodes a string into 1337
 * @n: str to encode
 *
 * Return: encoded str
 */

char *leet(char *n)
{
	int i, r;

	char array1[] = "aAeEoOtTlL";
	char array2[] = "4433007711";

	for (i = 0; n[i] != '\0'; i++)
	{
		for (r = 0; r <= 9; r++)
		{
			if (n[i] == array1[r])
			{
				n[i] = array2[r];
			}
		}
	}

	return (n);
}
