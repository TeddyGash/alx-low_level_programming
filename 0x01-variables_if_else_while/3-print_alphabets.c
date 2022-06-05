#include <stdio.h>

/**
* main - description
*
* Return: 0 if successful
*/

int main(void)
	{
	char alp;
	char ALP;

	alp = 'a';
	while (alp <= 'z')
		{
		putchar(alp);
		alp++;
		}

	ALP = 'A';
	while (ALP <= 'Z')
		{
		putchar(ALP);
		ALP++;
		}

	putchar('\n');

	return (0);
	}
