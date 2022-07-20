#include <stdio.h>

/**
 * _pow_recursion - calculates x^y
 *
 * @x: base integer
 *
 * @y: power integer
 *
 * Return: Power value
 */
int _pow_recursion(int x, int y)
{
	int power;

	if (y < 0)
	{
		return (-1);
	}
	if (x == 0)
	{
		return (0);
	}
	if (x == 1 || y == 0)
	{
		return (1);
	}
	power = x * _pow_recursion(x, y - 1);
	return (power);
}
