#include <stdio.h>

/**
* main - description
*
* Return: 0 if successful
*/

int main(void)
	{
	char alp;

	alp = 'a';
	while (alp <= 'z')
	{
	putchar(alp);
	putchar('\n');
	alp++;
	}

	return (0);
	}
