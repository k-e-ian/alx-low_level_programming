#include <stdio.h>

/**
 * factorial - calculates factorial of int n
 *
 * @n: integer
 *
 * Return: factorialed n
 */
int factorial(int n)
{
	if (n == 1 || n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	n = n * factorial(n - 1);
	return (n);
}
