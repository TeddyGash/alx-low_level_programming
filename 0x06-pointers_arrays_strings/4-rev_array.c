#include "main.h"

/**
 * reverse_array - reverse array of integers
 * @a: array
 * @n: size of array
 *
 */

void reverse_array(int *a, int n)
{
	int i;
	int temp;
	int index = n - 1;

	for (i = 0; i < n; i++)
	{
		temp = a[index];
		a[index] = a[i];
		a[i] = temp;
		index--;

		/**
		 * As 2 characters are changing place for each cycle of the loop
		 * only traverse half the array of characters
		 */
		if (index == (n / 2))
		{
			break;
		}
	}
}
