#include <stdio.h>

/**
 * string_toupper - change lower to upper in string
 *
 * @str: string pointer
 *
 * Return: string
 */
char *string_toupper(char *str)
{
	int count = 0;

	while (str[count])
	{
		if (str[count] >= 'a' && str[count] <= 'z')
			str[count] -= 32;
		count++;
	}
	return (str);
}
