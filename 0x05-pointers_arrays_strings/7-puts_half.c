#include "main.h"

/**
 * puts_half - prints half of a string, followed by a new line
 * @str: string to work on
 */

void puts_half(char *str)
{
	int index = 0;
	int mid, i, r;

	/*find str length*/
	while (str[index] != '\0')
	{
		index++;
	}

	if (index % 2 == 0)
	{
		mid = (index / 2);
		for (i = mid; i <= index; i++)
		{
			_putchar(str[i]);
		}
	}

	else
	{
		mid = ((index + 1) / 2);
		for (r = mid; r <= index; r++)
		{
		_putchar(str[r]);
		}
	}
	_putchar('\n');
}
