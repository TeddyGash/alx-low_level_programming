#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * rev_string - reverses a string
 * @s: string to reverse
 *
 */

void rev_string(char *s)
{
	int n  = strlen(s);
	char temp;
	int index = n - 1;
	int i;
	int size = index;

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
		temp = s[index];
		s[index] = s[i];
		s[i] = temp;
		index--;

		/**
		 * As 2 characters are changing place for each cycle of the loop
		 * only traverse half the array of characters
		 */
		if (index == (size / 2))
		{
			break;
		}
	}
}
