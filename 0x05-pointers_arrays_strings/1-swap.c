#include "main.h"
/**
 * swap_int - Swaps the value of the two integers
 * @a: Integer to be swapped
 * @b: Integer to be swapped
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
