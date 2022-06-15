#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: str to be appended to
 * @src: str to append
 * @n: number of bytes to use from src
 *
 * Return: dest
 *
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int r;

	/*finding the length of dest*/
	for (i = 0; dest[i] != '\0'; i++)
	{
		i++;
	}

	/*appending n bytes of  src to end of dest*/
	for (r = 0; r < n && src[r] != '\0'; r++)
	{
		dest[i] = src[r];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}
