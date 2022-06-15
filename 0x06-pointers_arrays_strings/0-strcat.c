#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: str to be appended to
 * @src: str to append
 *
 * Return: dest
 *
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int r;

	/*finding the length of dest*/
	for (i = 0; dest[i] != '\0'; i++)
	{
		i++;
	}

	/*appending src to end of dest*/
	for (r = 0; src[r] != '\0'; r++)
	{
		dest[i] = src[r];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}
