#include <stdio.h>
#include "main.h"

/**
 * _abs - absolute value of an integer
 *
 * @n: integer
 *
 * Return: integer
 */
int _abs(int n)
{
	return (n * ((n > 0) - (n < 0)));
}
