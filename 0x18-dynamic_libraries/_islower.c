#include <stdio.h>

/**
 * _islower - lower/upper function
 *
 * @c: integer
 *
 * if statement
 *
 * Return: 1 or 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
