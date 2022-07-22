#include <stdio.h>

/**
 * _strpbrk - searches for a string of set of bytes
 *
 * @s: pointer to string 1
 *
 * @accept: pointer to string 2
 *
 * Return: Null or Pointer to sting of any matches
 */
char *_strpbrk(char *s, char *accept)
{
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
				return (s);
		}

		s++;
	}

	return ('\0');
} 
