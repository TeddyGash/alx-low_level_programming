#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_rev - prints a string, in reverse, followed by a new line
 * @s: str to reverse and print
 *
 */

void print_rev(char *s)
{
	int n  = strlen(s);
	int index = n - 1;
	int i;
	char temp_array[1000];

	/* skip null */
	if (s == 0)
	{
		return;
	}

	/* skip empty string */
	if (*s == 0)
	{
		return;
	}

	/* reverse string */
	for (i = 0; i < n; i++)
	{
		temp_array[i] = s[index];
		index--;

		/**
		 * As 2 characters are changing place for each cycle of the loop
		 * only traverse half the array of characters

		if (index == (size / 2))
		{
			break;
		}
		*/
	}
	puts(temp_array);
}
