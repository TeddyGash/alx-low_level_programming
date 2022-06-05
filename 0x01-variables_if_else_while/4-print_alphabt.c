#include <stdio.h>

/**
* main - prints alphabets without q and e
*
* Return: 0 if successful
*/

int main(void)
	{
	char alp;

	for (alp = 'a'; alp <= 'z'; alp++)
		{
		if (alp != 'e' && alp != 'q')
			putchar(alp);
		}

	putchar('\n');

	return (0);
	}
