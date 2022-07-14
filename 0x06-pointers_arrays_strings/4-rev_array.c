#include <stdio.h>

/**
 * reverse_array - reverse an array
 *
 * @a: pointer to integer
 *
 * @n: integer, nth number
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int tmp;
	int count;

	count = n - 1;

	while (count >= n / 2)
	{
		tmp = a[n - 1 - count];
		a[n - 1 - count] = a[count];
		a[count] = tmp;

		count--;
	}
}
