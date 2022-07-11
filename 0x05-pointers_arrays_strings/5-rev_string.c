#include "main.h"

/**
 * rev_string - Reverses a string.
 * @s: The string to be reversed.
 */
void rev_string(char *s)
{
	int len = 0, count = 0;
	char tmp;

	while (s[count++])
	{
		len++;
	}

	for (count = len - 1; count >= len / 2; count--)
	{
		tmp = s[count];
		s[count] = s[len - count - 1];
		s[len - count - 1] = tmp;
	}
}
