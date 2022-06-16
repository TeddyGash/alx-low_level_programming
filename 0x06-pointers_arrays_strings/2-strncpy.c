#include "main.h"

/**
 * _strncpy - works like _strncpy
 * @dest: str to be copied to
 * @src: str to copy
 * @n: number of bytes to use from src
 *
 * Return: dest
 *
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	/*copying n bytes of  src to dest*/
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	/*appending \0 to end of dest*/
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
