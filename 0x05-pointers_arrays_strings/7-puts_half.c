#include "main.h"

/**
 * puts_half - prints half of a string, followed by a new line
 * @str: string to work on
 */

void puts_half(char *str)
{
	int index, i;
	int len = 0;

	/*find str length*/
	while (str[len] != '\0')
	{
		len++;
	}

	if ((len % 2) != 0)
	{
		index = (len + 1) / 2;
	}
	else
	{
		index = (len / 2);
	}

	for  (i = index; i < len; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
