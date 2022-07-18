#include <stdio.h>

/**
 *
 *
 *
 *
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int num = 0;
	int index = 0;
	int index2 = 0;


	for ( ; s[index] != '\0'; index++)
	{
		for ( ; accept[index2] != '\0'; index2++)
		{
			if (s[index++] == accept[index2++])
			{
				continue;
			}
			else
			num++;
		}
	}
	return (num);
}
