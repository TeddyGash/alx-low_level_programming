#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: number to swap
 * @b: number to swap
 *
 */

void swap_int(int *a, int *b)
	{
	/*save thw values of a& b in var a1 & b1*/
	int a1 = *a;
	int b1 = *b;

	*a = b1;
	*b = a1;
	}
