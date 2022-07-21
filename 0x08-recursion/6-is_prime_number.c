#include <stdio.h>

/**
 *
 *
 *
 */
int is_prime_number(int n)
{
	if (n <= 1 || n % 2 == 0 || n % 3 == 0)
	{
		return (0);
	}
	if (n == 2 || n == 3)
	{
		return (1);
	}
	return (1);
}
