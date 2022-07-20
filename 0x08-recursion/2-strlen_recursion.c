#include <stdio.h>

/**
 * _strlen_recursion - using recursion to calculate string length
 *
 * @s: pointer to string
 *
 * Return: String length
 */
int _strlen_recursion(char *s)
{
	int num = 0;

	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		num = 1 + _strlen_recursion(s + 1);
	}
	return (num);
}
