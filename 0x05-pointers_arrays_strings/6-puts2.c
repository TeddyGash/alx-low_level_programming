#include "main.h"
/**
 * puts2 - prints every other character of a string,
 * starting with the first character, followed by a new line
 * @str: string to work on
 */

void puts2(char *str)
{
	int index = 0;
	int n = 0;

	/*find str length*/
	while (str[index] != '\0')
	{
		index++;
	}

	while (n < index)
	{
		_putchar(str[n]);
		n += 2;
	}
	_putchar('\n');
}
