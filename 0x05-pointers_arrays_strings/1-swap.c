#include <stdio.h>

/**
 * swap_int - swap integer values
 *
 * @a: pointer a
 *
 * @b: pointer b
 *
 */
void swap_int(int *a, int *b)
{
	int swap = *a;
	*a = *b;
	*b = swap;
}
